
/* these set of macro definiciton are "include guard" */
// #ifndef MACRO
// #define MACRO
// some codes 
// #endif


#ifndef PREPROCESSOR
// check if PREPROCESSOR macro is defined.
// if already defined, skip to #endif so it can prevent include twice.
// if not defined, execute below codes.
    #define PREPROCESSOR
    // define a empty PREPROCESSOR macro here for preventing further second include.

    namespace preprocessor{
    void hello_func(void);
    }   // namespace preprocessor

#endif
// end of #ifndef clause

