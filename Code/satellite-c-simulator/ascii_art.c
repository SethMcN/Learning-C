#include "ascii_art.h"

const char *earth_arr[] ={
            "              _-o#&&*''''?d:>b\\_\n",
        "          _o/\"`''  '',, dMF9MMMMMHo_\n",
        "       .o&#'        `\"MbHMMMMMMMMMMMHo.\n",
        "     .o\"\" '         vodM*$&&HMMMMMMMMMM?.\n",
        "    ,'              $M&ood,~'`(&##MMMMMMH\\\n",
        "   /               ,MMMMMMM#b?#bobMMMMHMMML\n",
        "  &              ?MMMMMMMMMMMMMMMMM7MMM$R*Hk\n",
        " ?$.            :MMMMMMMMMMMMMMMMMMM/HMMM|`*L\n",
        "|               |MMMMMMMMMMMMMMMMMMMMbMH'   T,\n",
        "$H#:            `*MMMMMMMMMMMMMMMMMMMMb#}'  `?\n",
        "]MMH#             \"\"*\"\"\"\"*#MMMMMMMMMMMMM'    -\n",
        "MMMMMb_                   |MMMMMMMMMMMP'     :\n",
        "HMMMMMMMHo                 `MMMMMMMMMT       .\n",
        "?MMMMMMMMP                  9MMMMMMMM}       -\n",
        "-?MMMMMMM                  |MMMMMMMMM?,d-    '\n",
        " :|MMMMMM-                 `MMMMMMMT .M|.   :\n",
        "  .9MMM[                    &MMMMM*' `'    .\n",
        "   :9MMk                    `MMM#\"        -\n",
        "     &M}                     `          .-\n",
        "      `&.                             .\n",
        "        `~,   .                     ./\n",
        "            . _                  .-\n",
        "              '`--._,dd###pp=\"\"'\n"
        };

const int earth_arr_len = sizeof(earth_arr) / sizeof(earth_arr[0]);

const char *alien_arr[] = 
{
".     .       .  .   . .   .   . .    +  .\n",
"  .     .  :     .    .. :. .___---------___.\n",
"       .  .   .    .  :.:. _\".^ .^ ^.  '.. :\"-_. .\n",
"    .  :       .  .  .:../:            . .^  :.:\\.\n",
"        .   . :: +. :.:/: .   .    .        . . .:\\\n",
" .  :    .     . _ :::/:               .  ^ .  . .:\\\n",
"  .. . .   . - : :.:./.                        .  .:\\\n",
"  .      .     . :..|:                    .  .  ^. .:|\n",
"    .       . : : ..||        .                . . !:|\n",
"  .     . . . ::. ::\\(                           . :)/\n",
" .   .     : . : .:.|. ######              .#######::|\n",
"  :.. .  :-  : .:  ::|.#######           ..########:|\n",
" .  .  .  ..  .  .. :\\ ########          :######## :/\n",
"  .        .+ :: : -.:\\ ########       . ########.:/\n",
"    .  .+   . . . . :.:\\. #######       #######..:/\n",
"      :: . . . . ::.:..:.\\           .   .   ..:/\n",
"   .   .   .  .. :  -::::.\\.       | |     . .:/\n",
"      .  :  .  .  .-:.\":.::.\\             ..:/\n",
" .      -.   . . . .: .:::.:.\\.           .:/\n",
".   .   .  :      : ....::_:..:\\   ___.  :/\n",
"   .   .  .   .:. .. .  .: :.:.:\\       :/\n",
"     +   .   .   : . ::. :.:. .:.|\\  .:/|\n",
"     .         +   .  .  ...:: ..|  --.:|\n",
".      . . .   .  .  . ... :..:..\"(  ..)\"\n",
" .   .       .      :  .   .: ::/  .  .::\\\n",
};

const int alien_arr_len = sizeof(alien_arr) / sizeof(alien_arr[0]);

const char *saturn_arr[] = 
{
"                                                                    ..;===+.\n",
"                                                                .:=iiiiii=+=\n",
"                                                             .=i))=;::+)i=+,\n",
"                                                          ,=i);)I)))I):=i=;\n",
"                                                       .=i==))))ii)))I:i++\n",
"                                                     +)+))iiiiiiii))I=i+:'\n",
"                                .,:;;++++++;:,.       )iii+:::;iii))+i='\n",
"                             .:;++=iiiiiiiiii=++;.    =::,,,:::=i));=+'\n",
"                           ,;+==ii)))))))))))ii==+;,      ,,,:=i))+=:\n",
"                         ,;+=ii))))))IIIIII))))ii===;.    ,,:=i)=i+\n",
"                        ;+=ii)))IIIIITIIIIII))))iiii=+,   ,:=));=,\n",
"                      ,+=i))IIIIIITTTTTITIIIIII)))I)i=+,,:+i)=i+\n",
"                     ,+i))IIIIIITTTTTTTTTTTTI))IIII))i=::i))i='\n",
"                    ,=i))IIIIITLLTTTTTTTTTTIITTTTIII)+;+i)+i`\n",
"                    =i))IIITTLTLTTTTTTTTTIITTLLTTTII+:i)ii:'\n",
"                   +i))IITTTLLLTTTTTTTTTTTTLLLTTTT+:i)))=,\n",
"                   =))ITTTTTTTTTTTLTTTTTTLLLLLLTi:=)IIiii;\n",
"                  .i)IIITTTTTTTTLTTTITLLLLLLLT);=)I)))))i;\n",
"                  :))IIITTTTTLTTTTTTLLHLLLLL);=)II)IIIIi=:\n",
"                  :i)IIITTTTTTTTTLLLHLLHLL)+=)II)ITTTI)i=\n",
"                  .i)IIITTTTITTLLLHHLLLL);=)II)ITTTTII)i+\n",
"                  =i)IIIIIITTLLLLLLHLL=:i)II)TTTTTTIII)i'\n",
"                +i)i)))IITTLLLLLLLLT=:i)II)TTTTLTTIII)i;\n",
"              +ii)i:)IITTLLTLLLLT=;+i)I)ITTTTLTTTII))i;\n",
"             =;)i=:,=)ITTTTLTTI=:i))I)TTTLLLTTTTTII)i;\n",
"           +i)ii::,  +)IIITI+:+i)I))TTTTLLTTTTTII))=,\n",
"         :=;)i=:,,    ,i++::i))I)ITTTTTTTTTTIIII)=+'\n",
"       .+ii)i=::,,   ,,::=i)))iIITTTTTTTTIIIII)=+\n",
"      ,==)ii=;:,,,,:::=ii)i)iIIIITIIITIIII))i+:'\n",
"     +=:))i==;:::;=iii)+)=  `:i)))IIIII)ii+'\n",
"   .+=:))iiiiiiii)))+ii;\n",
"  .+=;))iiiiii)));ii+\n",
" .+=i:)))))))=+ii+\n",
".;==i+::::=)i=;\n",
",+==iiiiii+,\n",
"`+=+++;`\n",
};

const int saturn_arr_len = sizeof(saturn_arr) / sizeof(saturn_arr[0]);

const char *moon_arr[] = 
{
"                     .--------------.\n",
"                .---'  o        .    `---.\n",
"             .-'    .    O  .         .   `-.\n",
"          .-'     @@@@@@       .             `-.\n",
"        .'@@   @@@@@@@@@@@       @@@@@@@   .    `.\n",
"      .'@@@  @@@@@@@@@@@@@@     @@@@@@@@@         `.\n",
"     /@@@  o @@@@@@@@@@@@@@     @@@@@@@@@     O     \\\n",
"    /        @@@@@@@@@@@@@@  @   @@@@@@@@@ @@     .  \\\n",
"   /@  o      @@@@@@@@@@@   .  @@  @@@@@@@@@@@     @@ \\\n",
"  /@@@      .   @@@@@@ o       @  @@@@@@@@@@@@@ o @@@@ \\\n",
" /@@@@@                  @ .      @@@@@@@@@@@@@@  @@@@@ \\\n",
" |@@@@@    O    `.-./  .        .  @@@@@@@@@@@@@   @@@  |\n",
"/ @@@@@        --`-'       o        @@@@@@@@@@@ @@@    . \\\n",
"|@ @@@@ .  @  @    `    @            @@      . @@@@@@    |\n",
"|   @@                         o    @@   .     @@@@@@    |\n",
"|  .     @   @ @       o              @@   o   @@@@@@.   |\n",
"\\     @    @       @       .-.       @@@@       @@@      /\n",
" |  @    @  @              `-'     . @@@@     .    .    |\n",
" \\ .  o       @  @@@@  .              @@  .           . /\n",
"  \\      @@@    @@@@@@       .                   o     /\n",
"   \\    @@@@@   @@\\@@    /        O          .        /\n",
"    \\ o  @@@       \\ \\  /  __        .   .     .--.  /\n",
"     \\      .     . \\.-.---                   `--'  /\n",
"      `.             `-'      .                   .'\n",
"        `.    o     / | `           O     .     .'\n",
"          `-.      /  |        o             .-'\n",
"             `-.          .         .     .-'\n",
"                `---.        .       .---'\n",
"                     `--------------'\n",
};

const int moon_arr_len = sizeof(moon_arr) / sizeof(moon_arr[0]);

const char *space_ship_arr[] = 
{
"                     `. ___\n",
"                    __,' __`.                _..----....____\n",
"        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'\n",
"  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'\n",
",'________________                          \\`-._`-','\n",
" `._              ```````````------...___   '-.._'-:\n",
"    ```--.._      ,.                     ````--...__\\-.\n",
"            `.--. `-`                       ____    |  |`\n",
"              `. `.                       ,'`````.  ;  ;`\n",
"                `._`.        __________   `.      \\'__/`\n",
"                   `-:._____/______/___/____`.     \\  `\n",
"                               |       `._    `.    \\\n",
"                               `._________`-.   `.   `.___\n",
"                                                  `------'`\n",
};

const int space_ship_arr_len = sizeof(space_ship_arr) / sizeof(space_ship_arr[0]);