# Hierarchial Meta-Storms: An R package for community ecologists —— popular ordination methods, ecological null models & diversity analysis

![Version](https://img.shields.io/badge/Version-1.01%20-brightgreen)
![Release date](https://img.shields.io/badge/Released%20date-Nov.%2019%2C%202020-brightgreen)



# Contents

- [Introduction](#introduction)

- [System Requirement and dependency](#system-requirement-and-dependency)

- [Installation guide](#installation-guide)

- [Usage](#usage)

- [Tools in this package](#tools-in-this-package)



# Introduction

Hierarchical Meta-Storms (HMS) comprehensively calculates the dissimilarities of microbiome functional profiles by considering multi-level metabolic pathway hierarchy. It contains two core components: *i)* a dissimilarity algorithm that comprehensively calculates the distances among microbiome functional profiles by considering their multi-level metabolic pathway hierarchy among functional gene families, and *ii)* a PCoA implementation optimized by multi-thread parallel computing to rapidly parse out the beta-diversity pattern for thousands of samples. It takes the microbiome functional profiles of KO and their relative abundance as input, and computes and outputs their pairwise distance matrix and then the principle coordinates of PCoA. 

In addition, the standalone package is also developed by C++ ([Github: hierarchical-meta-storms](https://github.com/qdu-bioinfo/hierarchical-meta-storms.git)) for direct installation and use under Linux and MAC operating systems.

# System Requirement and dependency

## Hardware Requirements

Hierarchical Meta-Storms only requires a standard computer with sufficient RAM to support the operations defined by a user. For typical users, this would be a computer with about 2 GB of RAM. For optimal performance, we recommend a computer with the following specs:

  RAM: 8+ GB  
  CPU: 4+ cores, 3.3+ GHz/core

## Software Requirements

OpenMP library is the C/C++ parallel computing library. Most Linux releases have OpenMP already been installed in the system. In Mac OS X, to install the compiler that supports OpenMP, we recommend using the Homebrew package manager:

```
brew install gcc
```

The package depends C++ (>= 4.7), R (>= 2.10) and links to Rcpp, RcppArmadillo and RcppEigen package.

# Installation guide

At present, Hierarchical Meta-Storms provides a fully automatic installer for easy installation.

**a. Download the package**

```
wget http://bioinfo.single-cell.cn/Released_Software/hierarchical-meta-storms/data/hrms_1.01.tar.gz
```

**b. Install the package in R environment**

```
install.packages("hrms_1.01.tar.gz")
```

The package should take less than 1 minute to install on a computer with the specifications recommended above.

# Usage

**a.  Compute the distance matrix**

```
data(abd_matrix)
compfunc(abd_matrix, rev=0, dist_type=0, is_sim=0)
```

The method returns the pairwise distance or similarity matix.

**b. Implement the PCoA**

```
data(dist_matrix)
pcoa(dist_matrix, k=3)
```

The method returns the coordinates matrix of PCoA. 

# Methods in this package

**a. compfunc**

It calculates the hierarchical meta-storms distance matrix among microbiome functional profiles. Run:

```
?compfunc
```

in R environment for detailed parameters.

**b. pcoa**

It calculates the PCoA based the distance matrix. Run:

```
?pcoa
```

in R environment for detailed parameters.





