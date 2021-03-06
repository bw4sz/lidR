% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/algorithm-dec.r
\name{random}
\alias{random}
\title{Point Cloud Decimation Algorithm}
\usage{
random(density, use_pulse = FALSE)
}
\arguments{
\item{density}{numeric. The desired output density.}

\item{use_pulse}{logical. Decimate by removing random pulses instead of random points (requires running
\link{laspulse} first)}
}
\description{
This function is made to be used in \link{lasfilterdecimate}. It implements an algorithm that
randomly removes points or pulses to reach the desired density over the whole area (see
\code{\link[lidR:area]{area}}).
}
\examples{
LASfile <- system.file("extdata", "Megaplot.laz", package="lidR")
las = readLAS(LASfile, select = "xyz")

# Reach a pulse density of 1 on the overall dataset
thinned1 = lasfilterdecimate(las, random(1))
plot(grid_density(las))
plot(grid_density(thinned1))
}
\seealso{
Other point cloud decimation algorithms: \code{\link{highest}},
  \code{\link{homogenize}}
}
\concept{point cloud decimation algorithms}
