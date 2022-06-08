# Introduction

The yocto project is not embedded distro but it creats custom distos for you.
Core part- buid system.

Diff components in build systems
    - open embedded core - metadata
    - bitbake - UI
    - poky - example

## Automation of BS

OpenEmbedded Build system made of metadata. 
    - Recipes - list of individual tasks
    - classes
    - configurations

Bitbake will parse the metadata

build system = metadata + bitbake