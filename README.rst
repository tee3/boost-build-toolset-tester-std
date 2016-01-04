Boost.Build Toolset Language Standard Support Tester
====================================================

The project contains a Boost.Build project intended to test language
standard support of any Boost.Build toolset.  To do this, it attempts
to build components of generated C and C++ programs for all possible
language standard values.

Overview
--------

Running the following command will run all tests against the default
compiler.

.. code:: sh

   $ b2

To build against the ``gcc`` and ``clang`` toolsets, run the following
command.

.. code:: sh

   $ b2 \
       toolset=gcc
       toolset=clang

Requirements
------------

* Boost.Build
* All desired compilers
