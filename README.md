# K4 Maths Functions

# Usage
-  Download the latest release from [here](https://github.com/Kevin4e/K4-Maths-Functions/releases).
-  Depending on where you put the 'includes' and 'src' folders you will have to edit the `#include "function.h"`. Unless, if you use the same structure as this repository, then you won't have to edit anything.
-  This collection provides the following functions:
   * ## Factorial
     ### $n! = n * (n-1) * (n-2) * (n-3) * 3 * 2 * 1$
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
       - ### $\arcsin(x)$
         The angle θ whose sine is x. E.g. $\arcsin(0.5) = \frac{π}{6}$ rad -> $\sin$( $\frac{π}{6}$ rad $)$ = $0.5$
         #### How to use?
         You need to enter `arcsin_unit(number)` to use this function.
         
       - ### $\arccos(x)$
         The angle θ whose cosine is x. E.g. $\arccos(0.5) = \frac{π}{3}$ rad -> $\cos$( $\frac{π}{3}$ rad $)$ = $0.5$
         #### How to use?
         You need to enter `arcsin_unit(number)` to use this function.
         
       - ### $\arctan(x)$
         The angle θ whose tangent is x. E.g. $\arctan(1) = \frac{π}{4}$ rad -> $\tan$( $\frac{π}{4}$ rad $)$ = $1$
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
       - ### $\arccsc(x)$
         The angle θ whose cosecant is x. E.g. arccsc(1) = π/2 rad -> csc(π/2 rad) = 1
         #### How to use?
         You need to enter `arccsc_unit(number)` to use this function.
         
       - ### $\arcsec(x)$
         The angle θ whose secant is x. E.g. arcsec(1) = 0 rad -> csc(0 rad) = 1
         #### How to use?
         You need to enter `arcsec_unit(number)` to use this function.
      
       - ### $\arccot(x)$
         The angle θ whose cotangent is x. E.g. arccot(1) = π/4 rad -> cot(π/4 rad) = 1
         #### How to use?
         You need to enter `arccot_unit(number)` to use this function.
         
   * ### Gamma function (Stirling's formula)
     ### $Γ(n) = \sqrt{2πn} \left( \frac{n}{e} \right)^{n}$
       
   * ### Summation
     ### $\sum\limits_{i=1}^n i = i_1 + i_2 + i_3 + \cdots + i_n$
     ### How to use?
     You need to enter `sum(low_index, high_index, element)`
     
   * ### Infinite product
     ### $\prod\limits_{i=1}^n i = i_1 * i_2 * i_3 * \cdots * i_n$
     ### How to use?
     You need to enter `infproduct(low_index, high_index, element)`
     
   * ### Hyperbolic functions
     
