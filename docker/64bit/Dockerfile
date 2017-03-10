FROM azathoth/ubuntu:12.04

COPY ./docker/planners /root/planners
COPY ./simcity /root/simcity
COPY ./docker/cloud /root/planners/cloud
COPY ./docker/entrypoint.sh /root/entrypoint.sh

RUN chmod +x /root/entrypoint.sh && \
    dos2unix /root/entrypoint.sh

RUN apt-get update && \
    apt-get install -y --force-yes \
      apt-transport-https \
      build-essential \
      curl \
      git \
      lsb-release \
      python-all

RUN curl -sL https://deb.nodesource.com/setup | bash -
RUN apt-get update
RUN apt-get install nodejs -y --force-yes

RUN npm install -g node-gyp \
 && npm cache clear

RUN node-gyp configure || echo ""

RUN cd /root/planners/cloud && \
    npm install request --save && \
    npm install ejs --save && \
    npm install --save

EXPOSE 5000

ENTRYPOINT  ["/root/entrypoint.sh"]