
#include <iostream>
#include "../include/boomslangcore.h"

//Default Exception functions
boomslang_Error::boomslang_Error(){cause = boomslang_String("Unknown Error");}
boomslang_Error::boomslang_Error(boomslang_String nCause){cause = nCause;}
boomslang_String boomslang_Error::boomslang_getCause(){return cause;}

boomslang_Exception::boomslang_Exception(){cause = boomslang_String("Unknown Exception");}
boomslang_Exception::boomslang_Exception(boomslang_String nCause){cause = nCause;}
boomslang_String boomslang_Exception::boomslang_getCause(){return cause;}

boomslang_NotFound::boomslang_NotFound(){cause = boomslang_String("Unknown NotFound Exception");}
boomslang_NotFound::boomslang_NotFound(boomslang_String nCause){cause = nCause;}

boomslang_Invalid::boomslang_Invalid(){cause = boomslang_String("Unknown Invalid Exception");}
boomslang_Invalid::boomslang_Invalid(boomslang_String nCause){cause = nCause;}

boomslang_OutOfIndex::boomslang_OutOfIndex(){cause = boomslang_String("Unknown OutOfIndex Exception");}
boomslang_OutOfIndex::boomslang_OutOfIndex(boomslang_String nCause){cause = nCause;}

boomslang_MemoryFailure::boomslang_MemoryFailure(){cause = boomslang_String("Unknown MemoryFailure Exception");}
boomslang_MemoryFailure::boomslang_MemoryFailure(boomslang_String nCause){cause = nCause;}

boomslang_ZeroDivision::boomslang_ZeroDivision(){cause = boomslang_String("Unknown ZeroDivision Exception");}
boomslang_ZeroDivision::boomslang_ZeroDivision(boomslang_String nCause){cause = nCause;}
