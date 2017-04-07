# EDM-Cell-Signal-Fitting
Source code for fitting EDM precession signal data gathered using the Precession In The Dark (PITD) method. This program uses the Leavenberg-Marquardt nonlinear Chi^2 minimization method from Numerical Recipes in C (1988, chapter 15) to fit each Faraday rotation signal to A * sin(\omega t + \phi_0) * exp(t/\tau).  The A and B period probe samples are fit independently for each of the 6 cell pairs after being process to remove harmonics. EDM 8ch PITD Product Frequency Fitting Analysis.c is the primary source code file, EDM 8ch PITD Product Frequency Fitting LM Routine.c contains the aforementioned Leavenberg-Marquardt routine. EDM 8ch PITD Product Frequency Fitting.h is the CVi header file, EDM 8ch PITD Product Frequency Fitting.uir is the GUI file. Also uses Numerical Recipes file NRutilities.c and NRutilities.h. Compiled using CVI/LabWindows 2010.