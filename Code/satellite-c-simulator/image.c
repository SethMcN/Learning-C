#include <stdio.h>
#include "satellite.h"
#include <unistd.h>
#include <stdlib.h>

static const char *earth_arr[] ={
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

static const char *alien_arr[] = 
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

static const char *saturn_arr[] = 
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

static const char *moon_arr[] = 
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

typedef struct {
    const char **data;
    int lines;
} Image;

void satellite_art(void) {
    Image images[] = {
        { earth_arr, sizeof(earth_arr) / sizeof(earth_arr[0]) },
        { saturn_arr, sizeof(saturn_arr) / sizeof(saturn_arr[0]) },
        { alien_arr, sizeof(alien_arr) / sizeof(alien_arr[0]) },
        { moon_arr,  sizeof(moon_arr)  / sizeof(moon_arr[0])  }
    };
    
    int total = sizeof(images) / sizeof(images[0]);

    int img = rand() % 4;
    // printf("Random number: %d\n", img);

    
    for (int line = 0; line < images[img].lines; line++) {

        // 1 for dev mode to see the addresses of the image struct, data pointer, and line pointer
        if (0)
        {
            printf("Image struct address: %p\n", (void *)&images[img]);
            printf("Image data pointer:   %p\n", (void *)images[img].data);
            printf("Line pointer:         %p\n", (void *)images[img].data[line]);

            // 1 to slow down the output
            if (0){
                usleep(100000);
            }

        }else{
            printf("%s", images[img].data[line]);
            usleep(100000);
        }

    }
    
}