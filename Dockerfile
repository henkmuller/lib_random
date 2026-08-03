FROM ubuntu:24.04

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        jsoncpp \
        libdivsufsort \
        mpfr \
    && rmxx -rf /var/lib/apt/lists/*
