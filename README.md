## Docker image for PDDL solvers

This should work for every OS (Windows, Mac OS, Linux...)  
1. Download docker from [here](https://www.docker.com/community-edition#/download) and install it.  

### If you can run docker natively:
2. Check if the ports 5000 and 5001 is unused. If ports 5000 and 5001 are used, choose other free ports.  

#### For free ports 5000 and 5001:
3. Run download and run image with all **classical planners** by this command `docker run -p 500:5000 -t azathoth/pddl`  
4. Run download and run image with **temporal planner** by this command `docker run -p 5001:5001 -t azathoth/pddl-temporal`  
5. Check that both containers run and web servers work correctly by visiting addresses
    - http://localhost:5000/test  
    - http://localhost:5001/test
6. Use address http://localhost:5000/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
7. Use address http://localhost:5001 as address of your local **temporal** solver in the web editor.

#### For other free ports:  
3. Run download and run image with all **classical planners** by this command `docker run -p [free port 1]:5000 -t azathoth/pddl`  
4. Run download and run image with **temporal planner** by this command `docker run -p [free port 2]:5001 -t azathoth/pddl-temporal`  
5. Check that both containers run and web servers work correctly by visiting addresses
    - http://localhost:[free port 1]/test  
    - http://localhost:[free port 2]/test
6. Use address http://localhost:[free port 1]/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
7. Use address http://localhost:[free fort 2] as address of your local **temporal** solver in the web editor.

Examples: 
 - For basic planner and port 5000, the address is http://localhost:5000/ff
 - For temporal planner and port 5001, the address is http://localhost:5001
Not

### If you can run docker only via docker toolbox:
2. Find IP address of the docker which is shown when the docker console is started.
3. Check if the ports 5000 and 5001 is unused. If ports 5000 and 5001 are used, choose other free ports.  
4. Run download and run image with all **classical planners** by this command `docker run -p [free port 1]:5000 -t azathoth/pddl`
5. Run download and run image with **temporal planner** by this command `docker run -p [free port 2]:5001 -t azathoth/pddl-temporal`  
6. Check that both containers run and web servers work correctly by visiting addresses
    - http://[docker ip]:[free port 1]/test  
    - http://[docker ip]:[free port 2]/test  
7. Use address http://[docker ip]:[free port 1]/[planner] as address of your local solver in the web editor.
8. Use address http://localhost:[free fort 2] as address of your local **temporal** solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
Examples: 
     - For docker ip 192.168.1.10, port 5000 and basic planner, the address is http://192.168.1.10:5000/ff
     - For docker ip 192.168.1.10, port 5001 and temporal planner, the address is http://192.168.1.10:5001

The test website of correctly running server should look like this:
![running server](https://raw.githubusercontent.com/racinmat/pddl-docker/master/test.png)