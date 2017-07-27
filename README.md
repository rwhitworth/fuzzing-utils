# fuzzing-utils

## Fixes

#### jimtcl

* Fix / command: divide by zero
https://github.com/msteveb/jimtcl/commit/d139d42051b3539970ff5ec7fca6deb311e7307c

* expr: fix crash on invalid ternary order
https://github.com/msteveb/jimtcl/commit/cc83b696b6b5e4cef4e312782a3fff23d5cdb8ad

* Fix ref count for interpolation/expression
https://github.com/msteveb/jimtcl/commit/fdeb3a6c507680181a41e1f24cae711357819c4c

* expr: Add assertion for stack underflow
https://github.com/msteveb/jimtcl/commit/432647170f6d96d78ae98c8614054e003e925578

* expr: Add better checks for invalid ternary expression
https://github.com/msteveb/jimtcl/commit/f6940da4afeb50fd77582cee23f8d7a60e47dcab

* lsort: Fix a refcount issue              
https://github.com/msteveb/jimtcl/commit/1d6b931d0c873bbad193677734dc9d352628577b

* jim: Fix ref count problem with interpolated dict subst
https://github.com/msteveb/jimtcl/commit/bc1afe36eb28a54f62503d18e2228a81330ca4ac

* exec: Validate that a command is given
https://github.com/msteveb/jimtcl/commit/46d9d687fa0460dc2f92a14130eca18f496c4645

* scan: error on missing conversion char
https://github.com/msteveb/jimtcl/commit/2a3bfa6b1962af2dfb5c6e49d6dd6b3a39714df9

* exec: Fix check for | and |&         
https://github.com/msteveb/jimtcl/commit/a14d9438b9a67899be0443f39345fa957677f9b8

* format: Validate too many flags in format string
https://github.com/msteveb/jimtcl/commit/e288a2541df4b0cfd02cbe3c1b9305d516149d23

* format: Restrict formatted fields to a reasonable size
https://github.com/msteveb/jimtcl/commit/002a3ef0b663724b0f43dbd2d184505afae6dd3e

* lsort –unique: Fix case with no duplicates
https://github.com/msteveb/jimtcl/commit/c8e41c8a8a0d6cae87f89a6b26b336b2df8099d2

* regexp: Fix bad memory access on missing closing brace
https://github.com/msteveb/jimtcl/commit/edf6b0fce509133dccfeda71227240e60606f100

* scan: Ensure format is converted to string form
https://github.com/msteveb/jimtcl/commit/e1bf40597713aa821eb91c7e6c0aee96519f32c4

* expr: Replace expression engine                
https://github.com/msteveb/jimtcl/commit/bd5139c89e714bb7e10a0da55d9a10f51e93516c

* scan: validate -ve XPG3 specifier
https://github.com/msteveb/jimtcl/commit/0858783cc469c095d7e6121d1fc5689760da841e

* format: validate too long precision
https://github.com/msteveb/jimtcl/commit/8a0aae566304774210aaeaaac929efe3773b3c60

#### qlibc

* Issue 61 - fix emptry variable replacement causing a panic
https://github.com/wolkykim/qlibc/commit/1772a2b16f971c4d903f4601773f59cf2c2d1186

#### Compress::LZ4

* safely handle 0-size, >0 length payload; RT #120991          
https://github.com/gray/compress-lz4/commit/013cb62f9346719083dae5edd63388833c6aa72e

#### mruby

* mruby issue fixed between start of test and finding of issue      
https://github.com/mruby/mruby/issues/3585

#### funtools

* fix SEGV when opening an afl-fuzz-generated text file 1
https://github.com/ericmandel/funtools/commit/371b4d76dc56244b14ae1fcd20d65c7a38a8cb9d

* fix SEGV when opening an afl-fuzz-generated text file 2
https://github.com/ericmandel/funtools/commit/fa142a7069418c60018ac27affb7a5b05608b70a

* check for invalid characters in text file
https://github.com/ericmandel/funtools/commit/dba66e4b724e360d8e5c11c63b4742c06c2b804f

#### Gravity

* Fixed all crash issues reported by American Fuzzy Lop (afl-fuzz) on https://github.com/rwhitworth/gravity-fuzz/
https://github.com/marcobambini/gravity/commit/6e7035b054e30f268eca0ea16dadb2fcaf7642b2

* Multiple fixes for fuzzy unit test reported at https://github.com/rwhitworth/gravity-fuzz/tree/master/2017-04-05. Added a way to check expression correctness. Completed disassemble function.
https://github.com/marcobambini/gravity/commit/aee9746bac1f75096ff8d840d4c7786a13bdd9b7

* Multiple fixes for #155.  Added more than 300 fuzzy new test.
https://github.com/marcobambini/gravity/commit/a58675e0a898c624d6ea3970d41224bdda88d47b

* Fixed new fuzzy test #156.  Added new unit test.
https://github.com/marcobambini/gravity/commit/b07ed8f76a47c93d0c64d7e940093966e8422338

* Fixed assert triggered by new fuzzy test.  Unit-test updated.
https://github.com/marcobambini/gravity/commit/6eda92e1c4f9a743e15828185dcd5374c84b0175

* Added a sanity check for super operator loading. Unit test added.
https://github.com/marcobambini/gravity/commit/a39c6a461d1e714c63e3ea575be64d83375cc354

* Fixed an issue reported by fuzzy test.                              
https://github.com/marcobambini/gravity/commit/1600d87c65e13976d3d3e4786a630e96f6ba7e96

* Fixed a crash bug reported by fuzzy test. Unit test added.          
https://github.com/marcobambini/gravity/commit/74c051b468c8899efa9634fff0711ad83e56dbca

* Various fixes for the latest issues discovered by fuzzy testing. Unit test added.
https://github.com/marcobambini/gravity/commit/1c0bf5abb61ce8cd72d33a73de9ffe86d398bb4b

#### Espruino

* Fix segfault detected by fuzzing                            
https://github.com/espruino/Espruino/commit/5d6e8cb04fb56be78987d2906cc999e9fc6634da

* more fuzzing fixes - #1149                                
https://github.com/espruino/Espruino/commit/af419e7684fa41d771fe20c12611b250ccd73afd

* Fix some stack overflow bugs on Linux found by fuzzing
https://github.com/espruino/Espruino/commit/5240e7a8f6384cac3fa0c2e546b339ce196e95e1

* Remove un-needed code for parsing '.' in var statement
https://github.com/espruino/Espruino/commit/04e8b6dc93ac8fe9d0ba0afd60bb81585e1def78

* Fix assert detected by fuzzing - fix
https://github.com/espruino/Espruino/commit/a535e10065750f20f3633f72fc018681adb94581

* more fuzzing fixes            
https://github.com/espruino/Espruino/commit/5a60b8ebeb38b4d074444ce7312a8cb702a0ab14


#### libetpan

* Fixed crash #274 - CVE-2017-8825
https://github.com/dinhviethoa/libetpan/commit/1fe8fbc032ccda1db9af66d93016b49c16c1f22d

#### simple.vm 

* Explicitly catch division by zero
https://github.com/skx/simple.vm/commit/e9691d352e40ccc186ed50687a372d4256315ac2

* Fixed off-by-one in instruction-mapping
https://github.com/skx/simple.vm/commit/2fa197ba6341293bb033bce02fb104f41ed4dc1e

* Fix memory-leak of the code-section
https://github.com/skx/simple.vm/commit/9f4d96f107d5cb4801116a5ac5db518fe24258ef

* memcpy wraps around when writing past 0xFFFF
https://github.com/skx/simple.vm/commit/9eff6adeee519b6e036ec77828ae77fde99c7009

* Second bugfix for memcpy             
https://github.com/skx/simple.vm/commit/0341918deec31f763416f6412984fef991401d7c

* Allow capping the number of instructions to be run
https://github.com/skx/simple.vm/commit/a231d164e92f19920ded9ec595c1f114e2ff0926

* Check for error in fread           
https://github.com/skx/simple.vm/commit/c94eeed2faac4c8c921c0a25e2463d11c9bb6a32

* Explicitly ignore system() result
https://github.com/skx/simple.vm/commit/916407c9534fce42a211bbfa1cdde97bf516a135

* Bounds-check the stack-operations
https://github.com/skx/simple.vm/commit/2d53378fafd25262c36cce88e3eded9269b60f74

#### libmaxminddb

* Merge pull request #141 from maxmind/greg/no-buffer-check-overflow
https://github.com/maxmind/libmaxminddb/commit/07412b30f204034bfec880a38763a222d7d36043

#### mujs

* Add a js_setreport callback function to report warnings  
https://github.com/ccxvii/mujs/commit/fb32b5c893a0685dceaa2bb72bf64880e0cc4572

* Fix error message when missing stack traces in main.c    
https://github.com/ccxvii/mujs/commit/6a85c78a5d89503e7e5f0b09b2de9fe2dce7183d

* Emit line numbers for each entry in compound literals    
https://github.com/ccxvii/mujs/commit/0365576bab685613d46a3f714b602b774c4e3e1c

* Add recursion overflow checks in parser                 
https://github.com/ccxvii/mujs/commit/5f83cc98423474d0c7a26b0494e84168621467d0

#### yet-another-brainfuck-interpreter

* actually exit when invalid data returned from loadinstr, also exit early when stptr wraps and return proper error code
https://github.com/profan/yet-another-brainfuck-interpreter/commit/8fe7ab3e4a4c78f0ce98e18cd011153da16a84f8

#### mjs

* Don't crash on division by zero                      
https://github.com/cesanta/mjs/commit/c8d53f1afc5b80db101c0343718d5677df795ce7

* Fix cs_varint and add tests for it                     
https://github.com/cesanta/mjs/commit/eb8717b9114d5326dd48132181f907f21803aba6

* Don't crash on an invalid pointer arithmetic          
https://github.com/cesanta/mjs/commit/3603a08b9867dda63d2f821f0df4878407847db5

#### partcl
* fixed buffer overflow issues (#4), some formatting changes with newer clang-format
https://github.com/zserge/partcl/commit/3be59f968362b9405d81ec39388d9ed41ea3dc02

#### cperl
* Harmonize TOKENBUF_SIZE and stack buf sizes
https://github.com/perl11/cperl/commit/27c9cdda8039c0c724d983c1d7b602de0ec8d68e

* Disallow pad_findmy_pvn flags, no UTF8
https://github.com/perl11/cperl/commit/d7abc28f3d9d75b7d575e7b2c4e1f9a6cbe45f3f

* Fix #293 regex stack recursion overflow
https://github.com/perl11/cperl/commit/f973d447cef6088a627ef625c8da05eb21359da3

* perlcdelta: for the afl-fuzzer #293 fixed bugs
https://github.com/perl11/cperl/commit/35886a1e694a266d576d33d8cc289ce147ea5106

* Abort on Malformed UTF-8 character errors 
https://github.com/perl11/cperl/commit/0327f923ff75d32bb6180a06cafd8b02a6a1ff16

* Revert "Don’t stringify GV in numeric cx outside warnings scope"
https://github.com/perl11/cperl/commit/92de74c2455d11018564a6ae882aa1f00bc10122

#### corewar
* allocation off by one error                                               
https://github.com/Garuda1/corewar/pull/1/commits/270c64a9634f9fda71a6a7a2418ba8da97a3bff7

#### yabfc

* Major memory leaks fixed                                               
https://github.com/cameronswinoga/yabfc/commit/36db058a6e5e916e9dcb55e775a2b7a3af367642

* Last minor leak fixed                                               
https://github.com/cameronswinoga/yabfc/commit/7e376e03779f2b7b7670c3b4a271de04fae593f7

* Closing file pointers in correct location now                                               
https://github.com/cameronswinoga/yabfc/commit/d51bb6e85cff0ddfe469d1aa0be87a150132ab9c

#### zForth
* Added checks for division by zero for / and % primitives, added ZF_ABORT_DIVISION_BY_ZERO exception type
https://github.com/zevv/zForth/commit/d232eb6154795769ad6e5b8f521c5cd2014f3e11

#### openjpeg
* Avoid division by zero in opj_pi_next_rpcl, opj_pi_next_pcrl and opj_pi_next_cprl
https://github.com/uclouvain/openjpeg/commit/d27ccf01c68a31ad62b33d2dc1ba2bb1eeaafe7b

* Avoid index out of bounds access to pi->include[]                             
https://github.com/rouault/openjpeg/commit/d05d4ee096dad4260d965c711c1323c2947eec02

* Avoid index out of bounds access to pi->include[]                                 
https://github.com/rouault/openjpeg/commit/80818c39f5bfbac37768fcee95b0ffeceaa77264

* Avoid division by zero in opj_pi_next_rpcl, opj_pi_next_pcrl, opj_pi_next_cprl
https://github.com/uclouvain/openjpeg/commit/5c5319984b81e2aa32d1d83abdef0cdb8dbe7b18

#### off
* OFF_SYNTAX_OK state: moved to enum. fixes #1                      
https://github.com/bindh3x/off/commit/cd82a514caebab44e17956ead8c21a3b1a6238d3




## Closed without commits
Note: It is a-okay that some items are determined to not be real issues.  
It is up to individual developers to determine the severity of bug reports.

* https://github.com/jpmens/jo/issues/53
* https://github.com/marcobambini/gravity/issues/163
* https://github.com/stevedekorte/io/issues/354
* https://github.com/rwhitworth/sqlite-fuzz/tree/master/2017-05-12-lemon.c
* https://github.com/rwhitworth/sqlite-fuzz/tree/master/2017-05-13-lemon.c
* https://github.com/cc65/cc65/issues/469


## Outstanding

#### Wren
* https://github.com/munificent/wren/issues/442

#### libcintelhex
* https://github.com/martin-helmich/libcintelhex/issues/36

#### libucl
* https://github.com/vstakhov/libucl/issues/165

#### v7
* https://github.com/cesanta/v7/issues/582

#### MoarVM
* https://github.com/MoarVM/MoarVM/issues/596

#### rrdtool-1.x
* https://github.com/oetiker/rrdtool-1.x/issues/783
* https://github.com/oetiker/rrdtool-1.x/issues/784
* https://github.com/oetiker/rrdtool-1.x/issues/785

#### tre
* https://github.com/laurikari/tre/issues/58

#### 8cc 
* https://github.com/rui314/8cc/issues/88

#### gettext-tiny
* https://github.com/sabotage-linux/gettext-tiny/issues/11

#### radare2
* https://github.com/radare/radare2/issues/7553

#### mujs
* https://github.com/ccxvii/mujs/issues/42

#### openjpeg
* https://github.com/uclouvain/openjpeg/issues/939
* https://github.com/uclouvain/openjpeg/issues/940

#### gravity
* https://github.com/marcobambini/gravity/issues/161

#### Core-War
* https://github.com/emilwallner/Core-War/issues/23
* https://github.com/emilwallner/Core-War/issues/24

#### ravi
* https://github.com/dibyendumajumdar/ravi/issues/125

#### parrot
* https://github.com/parrot/parrot/issues/1236

#### huo
* https://github.com/HuoLanguage/huo/issues/61
* https://github.com/HuoLanguage/huo/issues/62

#### newt
* https://github.com/cqcallaw/newt/issues/46

#### hunspell
* https://github.com/hunspell/hunspell/issues/505

#### id3v2lib
* https://github.com/larsbs/id3v2lib/issues/24

#### cperl
* https://github.com/perl11/cperl/issues/300

#### yabfc
* https://github.com/cameronswinoga/yabfc/pull/8
* https://github.com/cameronswinoga/yabfc/pull/9

#### ejdb
* https://github.com/Softmotions/ejdb/issues/195
* https://github.com/Softmotions/ejdb/issues/196
* https://github.com/Softmotions/ejdb/issues/197



## Things not to fuzz

List of things fuzzed that found very little or no issues via AFL.  These may be worth revisiting with libfuzzer, ASAN enabled, etc.

- perl5 - heavily fuzzed by the community, but still tons of bugs to be found.  Tons.  Difficult to report bugs and get traction on fixing them, so not worth the time
- MRI ruby
- mruby - very heavily fuzzed by the community, due to bug bounties.  One issue found, but reported by another contributor as well.
- libgif - outstanding bug/CVE confirmed, but no new issues found
- jq
- lua
- luajit
- libsndfile - nothing found via afl-fuzz after weeks of fuzzing.  Very vulnerable with lots of active security issues being found, but I'll leave it to others
- libarchive - nothing found via afl-fuzz after weeks of fuzzing.  Very vulnerable with lots of active security issues being found, but I'll leave it to others
- libgd
- liblnk
- CSV::XS
- Lemon lexer/parser as part of SQLite3 - issues will not be resolved by developers
- imageworsener
- json-parser
- parson
- tinyrb - project dead, no reason to report bugs
- libxml2 - libFuzzer found nothing, also noted other netizens testing with libFuzzer
- libmaxminddb - clean.  afl-fuzz found one issue previously, but now finding nothing.  libFuzzer also finding nothing now.
- tinyexpr - nothing found after many days of fuzzing
- cc65 - issues will not be resolved by developers

## Issue Template

Hello,
I was using American Fuzzy Lop (afl-fuzz) to fuzz input to the PROGRAM_NAME program on Linux. Is fixing the crashes from these input files something you're interested in? The input files can be found here: URL

The files can be executed as `./PROGRAM_NAME id_filename` to cause seg faults.

Let me know if I can provide any more information to help narrow down this issue.

## AFL options

```
export CC=afl-clang-fast 
export CXX=afl-clang-fast++
export AFL_HARDEN=1
export AFL_NO_BUILTIN=1
export AFL_INST_RATIO=100
export AFL_DONT_OPTIMIZE=1
unset AFL_NO_ARITH
# LD_PRELOAD=/usr/local/lib/afl/libdislocator.so

echo 1 >/proc/sys/kernel/sched_child_runs_first
echo 1 >/proc/sys/kernel/sched_autogroup_enabled
echo never > /sys/kernel/mm/transparent_hugepage/enabled
sysctl kernel.pid_max=1000000
```


## gdb

`ulimit -c unlimited ; ./binary id_filename ; gdb --batch --eval-command=bt ./binary core`

## valgrind

`valgrind ./binary id_filename 2>&1 | less`

## debian box setup

```
apt-get install -y --no-install-recommends cmake make llvm llvm-dev libfuzzer-3.8-dev clang gcc g++ gdb perl git python ruby flex bison tmux
wget http://lcamtuf.coredump.cx/afl/releases/afl-latest.tgz
tar xvzf afl-latest.tgz
```
