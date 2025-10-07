void process(unsigned begin, unsigned end, char const *const *args)
    {
        for (char const *const *argsBegin = args + begin,
            *const *argsEnd = args + end;
         argsBegin != argsEnd;
         ++argsBegin)
            process(*argsBegin);    // Assume its overloaded?
    }
