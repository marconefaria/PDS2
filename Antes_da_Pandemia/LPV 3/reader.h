#ifndef READER_H
#define READER_H

#include <string>

/**
 * \struct Reader
 *
 * \brief Implements an object that reads tokens from the standard input.
 *
 * This struct implements an object that reads three types of tokens from the
 * standard input, where a token is a sequence of characters (a string) without
 * empty spaces. The tokens that are recognized are integers (sequences of
 * digits), real numbers (sequences of digits with at least one dot) and
 * general strings (everything else).
 */
struct Reader {
  /**
   * \brief The constructor method.
   */
  Reader(): reals(0), ints(0), others(0) {}

  /**
   * \brief Reads the next token from the standard input.
   * \return True if a token was read, and false if the queue was empty.
   */
  bool readNext();

  /**
   * \brief Reports the number of tokens of the 'real number' type that were
   * read.
   * \return the number of 'reals' read.
   */
  unsigned getNumReals() const;

  /**
   * \brief Reports the number of tokens of the 'integer' type that were read.
   * \return the number of 'integers' read.
   */
  unsigned getNumInts() const;

  /**
   * \brief Reports the number of tokens other than integers and reals read.
   * \return the number of other tokens read.
   */
  unsigned getNumOthers() const;

  private:

  /**
   * \brief Determines the type of the token that the argument represents. This
   * function changes the internal state of this object, updating one of the
   * three private attributes of it.
   * \param token the string whose type must be determined.
   */
  void chooseValue(std::string token);

  unsigned ints; ///< Number of integers read.

  unsigned reals; ///< Number of reals read.

  unsigned others; ///< Number of tokens other than integers and reals read.
};

#endif