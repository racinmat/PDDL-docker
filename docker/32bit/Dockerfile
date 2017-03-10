FROM ggrandes/ubuntu32:12.04

RUN rm /bin/sh && ln -s /bin/bash /bin/sh

COPY ./docker/PAH /root/planners
COPY ./simcity /root/simcity
COPY ./docker/cloud /root/planners/cloud

RUN apt-get update && \
    apt-get install sudo && \
    curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash - && \
    sudo apt-get install -y nodejs && \
    sudo apt-get install -y build-essential