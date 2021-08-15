module.exports = grammar({
  name: 'porcupine',

  extras: _ => [],

  externals: _ => [],

  inline: _ => [],

  rules: {
    porcupine: $ => repeat(
      choice(
        $.any_char,
        seq(
          '"', 
          repeat(choice(
            $.string_fragment,
            $.escape_sequence,
          )),
          token.immediate('"')
        ),
      ),
    ),

    string_fragment: $ =>
      token.immediate(prec(1, /[^"\\]+/)),

    any_char: _ => /.|\n|\r/,

    // placeholder; not correct for haskell
    escape_sequence: $ => token.immediate(
      seq(
        '\\',
        choice(
          /[^xu0-7]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/
        ),
      ),
    ),
  }
})
