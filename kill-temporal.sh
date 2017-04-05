#!/bin/bash
docker stop $(docker ps -qf "ancestor=azathoth/pddl-temporal" )