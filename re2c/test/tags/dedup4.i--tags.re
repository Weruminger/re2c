/*!re2c
    "a" @p "b"* / "d"* { @p }
    "a" @p "b"* / "c"* { @p }
    * {}
*/

/*!re2c
    "a" @p "b"*        { @p }
    "a" @p "b"* / "c"* { @p }
    * {}
*/

/*!re2c
    "a" @p "b"*         { @p }
    "a" @p "b"* / "cd"* { @p }
    * {}
*/

/*!re2c
    "a" @p "b"+         { @p }
    "a" @p "b"+ / "cd"* { @p }
    * {}
*/
