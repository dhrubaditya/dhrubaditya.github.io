# Possible Masters Projects

If you are a masters student in KTH or SU and want to do your masters project
with me you are welcome to contact me. Below I sketch a few possible projects.
The purpose is to give you an idea of the kind of problem we may attack.
They are not set it stone. 


##Project title:
Field-theoretic RG for neural networks
###Project description:
Human brain is an example biological neural network.
Unlike neural networks used in machine learning problems the connections
between neurons in biological networks is often local. It is thus possible
to study coarse-grained version of such networks with a neural field model,
which is a nonlinear stochastic partial differential equation.
Furthermore, a key difference between artificial and biological networks is
that the  latter is not homogeneous -- every neuron, even with the same
cell-type, is different from others. A possible way to take into account
this heterogeneity is to include quenched noise in neural field models. 
In our recent work we have introduced field theoretic renormalization
group (RG) techniques to study the large-scale properties of one such model.
This has opened up the possibilty to explore other related models and explore
certain key questions within this models, e.g., entropy production.
The student needs to be familiar with either quantum field theory or
statistical field theory. 
###Field:
Soft Matter

---

##Project title:
Spectral code in GPUs
###Project description:
Let me first introduce two seemingly unrelated problems. 
Linear waves appear  in many hydrodynamic problems in fluids and plasma. For
example, ocean waves, Alfven waves, drift waves, etc.
Under typical physical conditions the nonlinear effects in these problems are
small but not zero. A small nonlinearity can give rise to wave turbulence in
such problems. Typically, such problems appear in one or two dimensions. 

Neural networks are nonlinear systems driven by stochastic noise.
Biological neural networks are often locally connected and can be described in
PDEs called neural field models, e.g., Wilson-Kowan equations.  Typical neural
field problems are studied in two dimensions.

There are similar key questions in both of these problems:
(1) scaling of the energy spectrum ?
(2) Non-Gaussian statistics or intermittency. 

In practice, numerically these are very difficult problems. 

It is possible to write a psuedo-spectral code in two dimensions to
study both of these problems and can be used in a single GPU
to study them at very high resolutions. 
This project is appropriate students with experience in numerical
computations. The code will be released as an open-source project. 
###Field:
Soft Matter

---

##Project title:
Field theories for wave turbulence
###Project description:
Linear waves appear  in many hydrodynamic problems in fluids and plasma. For
example, ocean waves, Alfven waves, drift waves, etc.
Under typical physical conditions the nonlinear effects in these problems are
small but not zero. A small nonlinearity can give rise to wave turbulence in
such problems. Typically, such problems appear in one or two dimensions.
Usual analytical approach is to develop a close equation for the second
moment of the wave function -- this is typically a nonlinear integral
equation called the kinetic equation.  We have taken an alternative approach
to use field theoretic renormalization group technique for this problem.
This has opened up the possibility to go beyond the kinetic equation. 
The student needs to be familiar with either quantum field theory or
statistical field theory. 

###Field:
Soft Matter

---

##Project title:
Statistical mechanics of Mobius strip
###Project description:
This project is for a problem that is more "cute" than useful -- study
thermal fluctuations of  surface in the form of a Mobius strip in Monte Carlo
framework. 
We alrady have a code to simulate membranes with fixed boundaries.
Recently, a summer student has generalized the code to include stress-free
boundaries.
The next goal is the use this code to study elastic ribbons -- membranes
that are much longer in one direction that the other.
And then to go from ribbon to Mobius strip. 
Find out the (mean) equilibrium configuration of Mobius strip and compare
with existing results.  Calculate fluctuation spectra and response function
(through Green-Kubo relation). 
This project is appropriate students with experience in numerical
computations. 
The code will be released as an open-source project. 

###Field:
Soft Matter

---

###Principle Investigator:
Dhrubaditya Mitra
###Contacts (email):
dhrubaditya.mitra@su.se