require_extension('D');
require_fp;
softfloat_roundingMode = RM;
WRITE_FRD(f64_sub(f64(FRS1), f64(FRS2)).v);
set_fp_exceptions;