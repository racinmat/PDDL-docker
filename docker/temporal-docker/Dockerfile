FROM azathoth/ubuntu:12.04

COPY ./docker/planners /root/planners
COPY ./simcity /root/simcity
COPY ./docker/temporal /root/planners/temporal
COPY ./docker/entrypoint-temporal.sh /root/entrypoint-temporal.sh

RUN chmod +x /root/entrypoint-temporal.sh && \
    dos2unix /root/entrypoint-temporal.sh

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

RUN cd /root/planners/temporal && \
    npm install request --save && \
    npm install ejs --save && \
    npm install --save

EXPOSE 5001

ENTRYPOINT  ["/root/entrypoint-temporal.sh"]