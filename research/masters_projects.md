# Possible Master's Projects

If you are a Master's student at KTH or SU and wish to do your Master's thesis
with me, you are welcome to contact me. Below I outline a few possible projects.
The purpose is to give you an idea of the kinds of problems we may tackle.
They are not set in stone.

## Project Title: Field-Theoretic RG for Neural Networks
### Project Description:
The human brain is an example of a biological neural network. Unlike the neural
networks used in machine learning, the connections between neurons in biological
networks are often local. It is thus possible to study a coarse-grained version
of such networks using a neural field model, which is a nonlinear stochastic
partial differential equation (PDE). Furthermore, a key difference between
artificial and biological networks is that the latter is not homogeneous --
every neuron, even those of the same cell type, differs from others.
A possible way to account for this heterogeneity is to include quenched noise
in neural field models.

In our [recent work](https://arxiv.org/abs/2503.21605),
we introduced field-theoretic renormalization group (RG) techniques to study
the large-scale properties of one such model. This has opened up the
possibility to explore other related models and investigate certain
key questions within these models, e.g., entropy production.
The student needs to be familiar with either quantum field theory or
statistical field theory.



---

## Project Title: Spectral Code on GPUs
### Project Description:
I will first introduce two seemingly unrelated problems. Linear waves appear
in many hydrodynamic problems in fluids and plasmas.
For example, ocean waves, Alfvén waves, drift waves, etc.
Under typical physical conditions, the nonlinear effects in these problems are
small but not zero. Even a small nonlinearity can give rise to wave turbulence
in such problems. Typically, such problems are studied in one or two dimensions.

Neural networks are nonlinear systems driven by stochastic noise. Biological
neural networks are often locally connected and can be described by PDEs
called neural field models, e.g., Wilson-Cowan equations. Typical neural
field problems are studied in two dimensions.

There are similar key questions in both of these problems:

1. Scaling of the energy spectrum?
2. Non-Gaussian statistics or intermittency.

In practice, numerically, these are very difficult problems.

It is possible to write a pseudo-spectral code in two dimensions to study
both of these problems, which can be run on a single GPU to achieve very
high resolutions. This project is appropriate for students with experience in
numerical computations. The code will be released as an open-source project.



---

## Project Title: Field Theories for Wave Turbulence
### Project Description:
Linear waves appear in many hydrodynamic problems in fluids and plasmas.
For example, ocean waves, Alfvén waves, drift waves, etc.
Under typical physical conditions, the nonlinear effects in these problems are
small but not zero. A small nonlinearity can give rise to wave turbulence in
such problems. Typically, such problems appear in one or two dimensions.

The usual analytical approach is to develop a closed equation for the second
moment of the wave function -- this is typically a nonlinear integral equation
called the kinetic equation. We have taken an alternative approach using
field-theoretic renormalization group techniques for this problem.
This has opened up the possibility to go beyond the kinetic equation.
The student needs to be familiar with either quantum field theory or
statistical field theory.

---

## Project Title: Statistical Mechanics of a Möbius Strip
### Project Description:

This project addresses a problem that is more "cute" than useful: studying
thermal fluctuations of a surface in the form of a Möbius strip within a Monte
Carlo framework. We already have a code to simulate membranes with fixed
boundaries. Recently, a summer student generalized the code to include
stress-free boundaries. The next goal is to use this code to study elastic
ribbons -- membranes that are much longer in one direction than the othe
-- and then extend this from ribbons to Möbius strips.

We aim to determine the mean equilibrium configuration of a Möbius strip and
compare it with existing results. Additionally, we will calculate the
fluctuation spectra and response function (through the Green-Kubo relation).
This project is appropriate for students with experience in numerical
computations. The code will be released as an open-source project.



