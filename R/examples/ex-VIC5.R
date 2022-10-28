# This is a sample data to run VIC.
data(STEHE)

forcing <- STEHE$forcing
soil <- STEHE$soil
veg <- STEHE$veg

# Set the global options for a 7-days run.
vic_params(list(
  date_start = "1949-01-01",
  date_end = "1949-01-10",
  step_per_day = 24,
  snow_step_per_day = 24,
  runoff_step_per_day = 24
))

# Run VIC.
outputs <- vic(forcing, soil, veg)
print(outputs)

# Use user defind outputs and snowband parameters.
vic_param('nbands', 5)
band <- STEHE$snowbands

out_info <- list(
  wb = list(timescale = 'hour', aggpar = 6,
            outvars = c('OUT_RUNOFF', 'OUT_BASEFLOW', 'OUT_SOIL_MOIST'),
            aggtypes = c('sum', 'sum', 'end')),
  eb = list(timescale = 'day', aggpar = 1,
            outvars = c('OUT_SWE', 'OUT_SOIL_TEMP'),
            aggtypes = c('avg', 'min'))
)

outputs <- vic(forcing, soil, veg, snowband = band, output_info = out_info)
print(outputs)

# Example of parallelization
\dontrun{
library(doParallel)
registerDoParallel(cores=4)
outputs <- vic(forcing, soil, veg, snowband = band, parall = TRUE)
stopImplicitCluster()
print(outputs)
}
