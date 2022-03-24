#!/bin/bash


#OPTIONS=$(cat ./GamePaths.csv | awk -F, "{ print  "$1" }" ) 
#NUMGAMES=$(seq 1 $(cat ./GamePaths.csv | awk -F, "{ print $1 }" | wc -l))
#GAMES=$(cat ./GamePaths.csv | awk -F, '{ print $1 }' | sed 's/"//g')
seq 1 $(cat ./GamePaths.csv | awk -F, "{ print $1 }" | wc -l) > numGames.tmp
cat ./GamePaths.csv | awk -F, '{ print $1 }' | sed 's/"//g' > games.tmp

#paste numGames.tmp games.tmp
#rm *.tmp
#exit

#input=0
range="[0-9]"

figlet "Umary Engineering Club"

echo "--------------------------------------------------------------"
echo "|            *                                 *             |"
echo "|                        *                             *     |"
echo "|                   *                 *                      |"
echo "| Welcome to the University of Mary Engineering Club arcade! |"
echo "|       *                         *                          |"
echo "|                    *                      *                |"
echo "|   *                          *                     *       |"
echo "--------------------------------------------------------------"


echo "Here are the games available: "

paste numGames.tmp games.tmp

rm *.tmp


while  [[ 1 ]]; do
	read input	
	if [[ $input != $range ]]; then
		echo "INVALID SELECTION!"
	else
		echo "Selected $input"
		break
	fi

done



#if ( $(echo $input | grep "^-\?[0-9]*$") == $input ); then
#	echo $input
#fi

#cat ./GamePaths.csv | awk -F, '{ print $1 }'

