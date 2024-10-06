# K4 Maths Functions

# Usage
-  Download the latest release from [here](https://github.com/Kevin4e/K4-Maths-Functions/releases).

-  Depending on where you put the 'includes' and 'src' folders you will have to edit the `#include "function.h"`. Unless, if you use the same structure as this repository, then you won't have to edit anything.

-  This collection provides the following functions:
   * ## Factorial
     ### $n! = n * (n-1) * (n-2) * (n-3) * \cdots * 3 * 2 * 1$
     ### How to use?
     You need to enter `fact(number)` to use this function.
     
   * ## Logarithm
     ### $a^x = b <=> x = \log_{a}{b}$
     ### How to use?
     You need to enter `logarithm(base, argument)` to use this function.
    
   * ## Natural logarithm
     ### $\ln{x} = \log_{e}{x}$
     ### How to use?
     You need to enter `ln(argument)` to use this function.
     
   * ## Prime number check
     Verifies if a number is either prime or not
     ### How to use?
     You need to enter `isPrime(number)` to use this function.

   * ## Multiples
     Finds all the multiples of 'n' with setting a limit
     ### How to use?
     You need to enter `multiples(number, max)` to use this function.
     
   * ## Divisors
     Finds all the divisors of 'n'
     ### How to use?
     You need to enter `divisors(number)` to use this function.
     
   * ## Root
     ### $\sqrt[i]{n} = a <=> n = a^i$
     ### How to use?
     You need to enter `root(index, radicand)` to use this function.
     
   * ## Greatest Common Divisor
     Finds the G.C.D. of 2 numbers
     ### How to use?
     You need to enter `gcd(n1, n2)` to use this function.
     
   * ## Least Common Multiple
     Finds the l.c.m. of 2 numbers
     ### How to use?
     You need to enter `lcm(n1, n2)` to use this function.
     
   * ## Trigonometry functions
     A wide range of functions are offered here.
     
     + ### Angular units
       You're able to use different angular units, use `function_` + `rad/deg/grad`.
       
       - #### Radiants (RAD)
         Angular unit that has an amplitude range between $0$ and $2π$ (rad)
        
       - #### Degrees (DEG)
         Angular unit that has an ampltiude range between $0$ and $360$ (°)
 
       - #### Centesimal degrees (GRAD)
         Angular unit that has an amplitude range between $0$ and $400$ (gon)
       
     
     + ### Basic Functions
       - ### $\sin(\theta)$
         The x-coordinate of the point of intersection between the terminal side of the angle $\theta$ and the unit circle.
         ### How to use?
         You need to enter `sin_unit(angle)` to use this function.
         
       - ### $\cos(\theta)$
         The y-coordinate of the point of intersection between the terminal side of the angle $\theta$ and the unit circle.
         ### How to use?
         You need to enter `cos_unit(angle)` to use this function.
         
       - ### $\tan(\theta)$
         The ratio of the y-coordinate to the x-coordinate of the point of intersection between the terminal side of the angle $\theta$ and the unit circle. Mathematically, it's the result of $\frac{\sin(\theta)}{\cos(\theta)}$
         ### How to use?
         You need to enter `tan_unit(angle)` to use this function.
         
     + ### Inverse functions
       - ### $\sin^{-1}(x)$
         The angle $\theta$ whose sine is $x$. E.g. $\sin^{-1}(0.5) = \frac{π}{6}$ rad -> $\sin$( $\frac{π}{6}$ rad $) = 0.5$
         #### How to use?
         You need to enter `arcsin_unit(number)` to use this function.
         
       - ### $\cos^{-1}(x)$
         The angle $\theta$ whose cosine is $x$. E.g. $\cos^{-1}(0.5) = \frac{π}{3}$ rad -> $\cos$( $\frac{π}{3}$ rad $) = 0.5$
         #### How to use?
         You need to enter `arcsin_unit(number)` to use this function.
         
       - ### $\tan^{-1}(x)$
         The angle $\theta$ whose tangent is $x$. E.g. $\tan^{-1}(1) = \frac{π}{4}$ rad -> $\tan$( $\frac{π}{4}$ rad $) = 1$
         #### How to use?
         You need to enter `arctan_unit(number)` to use this function.
         
     + ### Reciprocal functions
       - ### $\csc(\theta)$
         Mathematically, it's the reciprocal of $\sin(\theta)$, so $\frac{1}{\sin(\theta)}$
         #### How to use?
         You need to enter `csc_unit(angle)` to use this function.
         
       - ### $\sec(\theta)$
         Mathematically, it's the reciprocal of $\cos(\theta)$, so $\frac{1}{\cos(\theta)}$
         #### How to use?
         You need to enter `sec_unit(angle)` to use this function.
         
       - ### $\cot(\theta)$
         Mathematically, it's the reciprocal of $\tan(\theta)$, so $\frac{\cos(\theta)}{\sin(\theta)}$
         #### How to use?
         You need to enter `cot_unit(angle)` to use this function.

     + ### Inverse reciprocal functions
       - ### $\csc^{-1}(x)$
         The angle $\theta$ whose cosecant is $x$. E.g. $\csc^{-1}(1) = \frac{π}{2}$ rad -> $\csc$( $\frac{π}{2}$ rad $) = 1$
         #### How to use?
         You need to enter `arccsc_unit(number)` to use this function.
         
       - ### $\sec^{-1}(x)$
         The angle $\theta$ whose secant is $x$. E.g. $\sec^{-1}(1) = 0$ rad -> $\sec$( $0$ rad $) = 1$
         #### How to use?
         You need to enter `arcsec_unit(number)` to use this function.
      
       - ### $\cot^{-1}(x)$
         The angle $\theta$ whose cotangent is $x$. E.g. $\cot^{-1}(1) = \frac{π}{4}$ rad -> $\cot$( $\frac{π}{4}$ rad $) = 1$
         #### How to use?
         You need to enter `arccot_unit(number)` to use this function.
         
   * ## Gamma function (Stirling's formula)
     ### $Γ(n) ∼ \sqrt{2πn} \left( \frac{n}{e} \right)^{n}$
     ### How to use?
     You need to enter `gamma(number)` to use this function.
       
   * ## Summation
     ### $\sum\limits_{i=1}^n i = i_1 + i_2 + i_3 + \cdots + i_n$
     ### How to use?
     You need to enter `sum(low_index, high_index, element)`
     
   * ## Infinite product
     ### $\prod\limits_{i=1}^n i = i_1 * i_2 * i_3 * \cdots * i_n$
     ### How to use?
     You need to enter `infproduct(low_index, high_index, element)`
     
   * ## Hyperbolic functions
     + ### Basic functions
       - ### Hyperbolic sine
         ### $\sinh(x) = \frac{e^x - e^{-x}}{2}$
         ### How to use?
         You need to enter `sinh(number)` to use this function (! ALREADY IMPLEMENTED IN `cmath` !).
         
       - ### Hyperbolic cosine
         ### $\cosh(x) = \frac{e^x + e^{-x}}{2}$
         ### How to use?
         You need to enter `cosh(number)` to use this function (! ALREADY IMPLEMENTED IN `cmath` !).
         
       - ### Hyperbolic tangent
         ### $\tanh(x) = \frac{\sinh(x)}{\cosh(x)} = \frac{e^x - e^{-x}}{e^x + e^{-x}}$
         ### How to use?
         You need to enter `tanh(number)` to use this function (! ALREADY IMPLEMENTED IN `cmath` !).
         
     + ### Inverse functions
       - ### Hyperbolic arcsine
         ### $\sinh^{-1}(x) = \ln\left( x + \sqrt{x^2 + 1} \right)$
         ### How to use?
         You need to enter `arcsinh(number)` to use this function.
 
       - ### Hyperbolic arccosine
         ### $\cosh^{-1}(x) = \ln\left( x - \sqrt{x^2+1} \right)$
         ### How to use?
         You need to enter `arccosh(number)` to use this function.
         
       - ### Hyperbolic arctangent
         ### $\tanh^{-1}(x) = \frac{1}{2}$ $\ln\left( \frac{1+x}{1-x} \right)$
         ### How to use?
         You need to enter `arctanh(number)` to use this function.

     + ### Reciprocal functions
       - ### Hyperbolic cosecant
         ### $\csch(x) = \frac{1}{\sinh(x)} = \frac{1}{\frac{e^x - e^{-x}}{2}} = \frac{2}{e^x - e^{-x}}$
         ### How to use?
         You need to enter `csch(number)` to use this function.

       - ### Hyperbolic secant
         ### $\sech(x) = \frac{1}{\cosh(x)} = \frac{1}{\frac{e^x + e^{-x}}{2}} = \frac{2}{e^x + e^{-x}}$
         ### How to use?
         You need to enter `sech(number)` to use this function.

       - ### Hyperbolic cotangent
         ### $\coth(x) = \frac{\cosh(x)}{\sinh(x)} = \frac{\frac{e^x + e^{-x}}{2}}{\frac{e^x - e^{-x}}{2}} = \frac{e^x - e^{-x}}{e^x + e^{-x}}$
         ### How to use?
         You need to enter `coth(number)` to use this function.
         
     + ### Inverse reciprocal functions
       - ### Hyperbolic arccosecant
         ### $\csch^{-1}(x) = \ln\left( \frac{1+\sqrt{1+x^2}}{x} \right)$
         ### How to use?
         You need to enter `arccsch(number)` to use this function.
         
       - ### Hyperbolic arcsecant
         ### $\sech^{-1}(x) = \ln\left( \frac{1+\sqrt{1-x^2}}{x} \right)$
         ### How to use?
         You need to enter `arcsech(number)` to use this function.
         
       - ### Hyperbolic arccotangent
         ### $\coth^{-1}(x) = \frac{1}{2}$ $\ln\left( \frac{x+1}{x-1} \right)$
         ### How to use?
         You need to enter `arccoth(number)` to use this function.

         
# Main Notes
-  None of the functions checks the input given. You'll have to implement them yourself.

-  [test.cpp](https://github.com/Kevin4e/K4-Maths-Functions/blob/main/K4%20Maths%20Functions/test.cpp) is **<u>NOT</u>** part of the project! It contains a series of menu where you can get ideas on how to handle every function's **Conditions for Existence**.

-  Huge numbers will lead to an integer overflow.

-  The "Prime number check" function is boolean. Using it will not print if it's either prime or not.

# Troubleshooting
-  If you experience any wrong results or unexpected situations, before you [submit an issue](https://github.com/Kevin4e/K4-Maths-Functions/issues), please check [all the notes](https://github.com/Kevin4e/K4-Maths-Functions/blob/main/NOTES/ALLNOTES.txt).
