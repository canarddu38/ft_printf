# ft_printf
Because ft_putnbr() and ft_putstr() aren’t enough

## Format
```
    %[flags][width][.precision]type
```

## Features
| Flag    | Meaning                                  | Applies to                | Notes / Interactions                               |
| ------- | ---------------------------------------- | ------------------------- | -------------------------------------------------- |
| `-`     | Left align output (pad on the **right**) | all                       | Overrides `0` flag.                                |
| `0`     | Pad with zeros instead of spaces         | numbers, `p`, not strings | Ignored if precision is set or `-` flag is active. |
| `.`     | Precision specifier                      | numbers, strings          | For numbers: min digits. For strings: max chars.   |
| (width) | Minimum field width                      | all                       | Pads with spaces (or zeros if `0` applies).        |
| `#`     | Alternate form                           | `x`, `X`, `o`             | Adds `0x`, `0X`, or leading `0` prefix.            |
| ` `     | Space prefix for positive numbers        | signed numbers            | Ignored if `+` flag is set.                        |
| `+`     | Always show sign (`+` or `-`)            | signed numbers            | Overrides ` ` flag.                                |


- `%c` Prints a single character.
- `%s` Prints a string (as defined by the common C convention).
- `%p` The (void *) pointer argument has to be printed in hexadecimal format.
- `%d` Prints a decimal (base 10) number.
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned decimal (base 10) number.
- `%x` Prints a number in hexadecimal (base 16) lowercase format.
- `%X` Prints a number in hexadecimal (base 16) uppercase format.
- `%%` Prints a percent sign.

## TODO - Future improvements
- [ ] handle flags for the bonus
- [ ] handle invalid type input e.q. (ft_printf(`%c`, `ddd`);)

## Know Bugs
- [x] `%u` may have an underflow error (possible type cast issue).


## By 0x262d - Nov 2025