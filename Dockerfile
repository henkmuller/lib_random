FROM ubuntu:24.04

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        libbz2-dev libdivsufsort-dev libjsoncpp-dev libssl-dev libmpfr-dev
