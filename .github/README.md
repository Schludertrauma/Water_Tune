Water Tune

Water Tune is a small command-line tool to improve the tap water.
Not everyone can get his hand on rainwater or a osmosis system and need to rely on tap water.
But many tap water sources have hard water, often with an imbalanced calcium-to-magnesium ratio and a pH that is higher for most plants. 

Water Tune is my try to learn c++ and build something thats can help me estimate:

how much magnesium sulfate (Bitter/Epsom salt) is needed to reach a calcium-to-magnesium ratio of roughly 3:1
how much pH-down solution (based on Biobizz) is needed to adjust water to a target pH (default: 6.3)

The goal is not perfect water, or to know what every plant needs, but a simple try to give the plants better water.

Features:

Calcium-to-magnesium ratio calculator
Info: You need Bittersalt and the Water-Information from your Water-Provider.

pH down calculator
Info: You need a Ph Down(BioBizz) and a Ph Meter.

CLI
Info: No external dependencies.

Build:

git clone https://github.com/Schludertrauma/Water_Tune.git
cd Water_Tune

cmake -B build
cmake --build build
./build/Water_Tune