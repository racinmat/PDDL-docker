#!/bin/bash
docker exec -it $(docker ps -qf "ancestor=azathoth/pddl-temporal" ) bash