
import sys, json, os

from utils.parser import Problem

def getSimplePlan(task, plan, err_msg, output):
    return json.dumps({'parse_status': 'ok',
                       'type': 'simple',
                       'length': len(plan),
                       'plan': plan,
                       'error': err_msg,
                       'output': output}, indent=4)

def doit(domain, problem, outfile):

    solver_output = None

    try:
        file = open(outfile, 'r')
        solver_output = file.read()
        file.close()
    except Exception, e:
        return json.dumps({'parse_status': 'err', 'output': solver_output,
                           'error': "Failed to read solver output -- %s" % str(e)})

    if '; Solution Found\n' in solver_output:
        plan_text = solver_output.split('; Solution Found\n')[1]
        return json.dumps({'parse_status': 'ok',
                           'plan': plan_text,
                           'output': solver_output})
    else:
        return json.dumps({'parse_status': 'err',
                           'output': solver_output})



if __name__ == '__main__':

    domain = sys.argv[1]
    problem = sys.argv[2]
    solverout = sys.argv[3]

    print doit(domain, problem, solverout)

