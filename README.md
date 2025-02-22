# Combatting the Precision Loss of Partial Contexts in Abstract Interpretation
## Bekämpfung des Präzisionsverlustes durch partielle Kontexte in Abstrakter Interpretation
### Abstract
The precision of interprocedural static analyses depends on the variant of context-sensitivity used. While less context-sensitivity grants faster computation times, it comes with a loss in precision. A portion of this precision is actually lost unnecessarily, as some parts of the caller state are not altered during the call, however, they are still overwritten with less precise information from the callee after the call.

We concretize this unnecessary precision loss for values-of-variables analyses and give an approach to recover it. For this, we define a taint analysis tracking which variables may be written by a procedure call. We use this information to update the caller state only with the information about possibly written variables from the callee state after a call and keep the information of definitely unwritten ones. We implement a version of this approach in the Goblint analyzer for the C language and perform benchmarks on it. Additionally, we give a similar approach for a specific thread-related analysis, where the caller state only needs to be updated with the callee state when a thread was created in the procedure call.

The results of our benchmarks show, that actually the precision lost as well as speedup gained through context-insensitivity compared to a fully context-sensitive analysis is rather minuscule for the majority of our benchmark programs. Furthermore, even though our proposed approach recovers a notable portion of the little precision that is lost, it fails to consistently achieve a shorter computation time than a fully context-sensitive analysis. However, we found that the number of timeout and stack overflow errors can be significantly reduced through context-insensitivity. Thus, our approach is best applied in cases, where errors have to be avoided, but precision is more important than computation time.

[full document](https://github.com/FelixKrayer/bachelors-thesis-goblint/blob/main/Thesis_2023_02_14.pdf)

## License

[![Creative Commons License][license-image]][license]

The template for this thesis is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License][license], meaning that:

 * You can share (copy, redistribute) and adapt (remix, transform, build upon) this template for any purpose, even commercially.
 * If you share the template or a modified (derived) version of it, you must attribute the template to the original authors ([Florian Walch and contributors][template-authors]) by providing a [link to the original template][template-url] and indicate if changes were made.
 * Any derived template has to use the [same][license] or a [compatible license][license-compatible].

The license **applies only to the template**; there are no restrictions on the resulting PDF file or the contents of your thesis.

[license-compatible]: https://creativecommons.org/compatiblelicenses
[license-image]: https://i.creativecommons.org/l/by-sa/4.0/88x31.png
[license]: https://creativecommons.org/licenses/by-sa/4.0/
[template-authors]: https://github.com/TUM-Dev/tum-thesis-latex/graphs/contributors
[template-url]: https://github.com/TUM-Dev/tum-thesis-latex
