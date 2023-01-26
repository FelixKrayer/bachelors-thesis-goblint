int a|\colorbox{TUMAccentLightBlue}{, c}|;

void incr() {
  a = a + 1;
}

void main () {
  a = 1;
  |\colorbox{TUMAccentLightBlue}{c = 10;}|
  incr(); |\label{code:incr1}|
  a = -3;
  |\colorbox{TUMAccentLightBlue}{c = -10;}|
  incr(); |\label{code:incr2}|
  assert(a < 0); |\label{code:assert_a}|
  |\colorbox{TUMAccentLightBlue}{assert(c < 0);}\label{code:assert_c}|
}