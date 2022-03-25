#!/bin/bash


#Some vars
range="[0-9]"

#Build list of games
seq 1 $(cat ./GamePaths.csv | awk -F, "{ print $1 }" | wc -l) > numGames.tmp
cat ./GamePaths.csv | awk -F, '{ print $1 }' | sed 's/"//g' > games.tmp


#Creating Functions for common things
################################################################################################
function banner {
echo "--------------------------------------------------------------"
echo "|            *                                 *             |"
echo "|                        *                             *     |"
echo "|                   *                 *                      |"
echo "| Welcome to the University of Mary Engineering Club arcade! |"
echo "|       *                         *                          |"
echo "|                    *                      *                |"
echo "|   *                          *                     *       |"
echo "--------------------------------------------------------------"
}


function get_highscore {
echo "Blah"
}


function game_select {
paste numGames.tmp games.tmp
#rm *.tmp
echo "Here are the games available: "
while  [[ 1 ]]; do
	read input	
	if [[ $input != $range ]]; then
		echo "INVALID SELECTION!"
	else
		echo "Selected $input"
		GAME=$()		
		break
	fi

done
}
#END OF FUNCTIONS
####################################################################################################


#Main

figlet "Umary Engineering Club"

banner

game_select







