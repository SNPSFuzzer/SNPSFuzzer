# SNPSFuzzer

> This repository contains source code that belongs to [**SNPSFuzzer: A Fast Greybox Fuzzer for Stateful Network Protocols using Snapshots**](https://arxiv.org/abs/2202.03643)

## Introduction

SNPSFuzzer, a fast greybox fuzzer for stateful network protocols using snapshots. SNPSFuzzer dumps the context information when the network protocol program is in a specific state and restores it when the state needs to be fuzzed.

## Protocols Support

We implement a prototype of SNPSFuzzer and evaluate it on a widely used open-source benchmark for network protocol fuzzing named ProFuzzBench.   

## Installation

### Step I: clone

```bash
git clone https://github.com/SNPSFuzzer/SNPSFuzzer.git
export SNPSFUZZER=where the snpsfuzzer directory locates
```

### Step II: Install dependencies for SNPSFuzzer

#### 1. install criu4snpsfuzzer

> criu4snpsfuzzer is based on criu's criu-dev branch tag 3.12, with necessary modifications by us.

**Dependencies**

```bash
sudo apt-get install libprotobuf-dev libprotobuf-c-dev protobuf-c-compiler protobuf-compiler python-protobuf libnl-3-dev libnet-dev libbsd-dev libaio-dev libcap-dev pkg-config
sudo apt-get --no-install-recommends install asciidoc
sudo apt-get --no-install-recommends install xmlto
```

**compiler**

```
cd $SNPSFUZZER
cd criu4snpsfuzzer
make
sudo make install
sudo cp ./lib/c/libcriu.so /usr/local/lib/libcriu.so.2
sudo ldconfig
```

#### 2. dependencies for AFLNET

```
# Install clang (as required by AFL/AFLNet to enable llvm_mode)
sudo apt-get install clang
# Install graphviz development
sudo apt-get install graphviz-dev
```

### Step III: compiler and build

```
cd $SNPSFUZZER
make
cd llvm_mode
make
cd ..
sudo make install
```









