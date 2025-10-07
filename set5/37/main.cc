#include <string>

int main()
{
    using ImmutableString = const std::string;  // immutable string
    using PtrToString = ImmutableString*;   // mutable ptr to immutable string
    using PtrArray = PtrToString[];
                    // Array of mutable pointers to const strings
    using ImmutablePtrArr = PtrArray* const;
                    // Immutable ptr to array.
    using ArrayImmPtr = ImmutablePtrArr[];
                    // Array of immutable ptrs to array.
    ArrayImmPtr *ptr;
}