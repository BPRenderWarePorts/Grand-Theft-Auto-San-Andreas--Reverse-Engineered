#
# file: clothes.dat
# description: File listing cutscene replacements for clothes models and rules 
#		about what clothes models can be used with what
#

#
# Rules:
# SETC <model1> <comp> <model2>:	
#		If player has "model1" then set component "comp" to be "model2".
# TEX <model> <tex>:	
#		If player has "model" then set its texture to be "tex". 
# HIDE <model> <comp>:
#		If player has "model" then hide component "comp".
# CUTS <model1> <model2>:
#		If player has "model1" then in a cutscene give them "model2".
# IGNORE <model>:
#		If player has "model" then ignore rules related to "model"
# ENDIGNORE <model>:
#		End the ignoring of rules based on "model".
#
rule

# gimp suit
SETC	gimpleg		head		gimpmask	gimpmask
SETC	gimpleg		torso		gimptorso	gimp
SETC	gimpleg		feet		gimpfeet	gimpshoe
SETC	gimpleg		hands		gimphands	-
HIDE	gimpleg		legs


#police suit
SETC	policetr	torso		policeshirt	policeshirt
SETC	policetr	feet		shoe		shoedressblk
HIDE	policetr	legs

#medic outfit
SETC	medictr		torso		policeshirt	medic
SETC	medictr		feet		shoe		shoedressblk
HIDE	medictr		legs

#pimp
SETC	pimptr		torso		pimp		pimp
SETC	pimptr		feet		pimpshoe	pimpshoe
HIDE	pimptr		legs

#Mechanic Outfit
SETC	garagetr	torso		garagetop	garagetop
SETC	garagetr	feet		bask1		timbergrey
HIDE	garagetr	legs

#valet
SETC	valet		legs		suit1tr		suit1trblk
SETC	valet		feet		shoe		shoedressblk
HIDE	valet		torso

#country bumpkin
SETC	countrytr	torso		country		country
SETC	countrytr	feet		bask1		timbergrey
HIDE	countrytr	legs

IGNORE	balaclava
IGNORE	gimpmask
IGNORE	cornrows
IGNORE	tramline
#hats
SETC	bandana		head		head		-
SETC	helmet		head		head		-
SETC	cowboy		head		head		-
SETC	trilby		head		head		-
SETC	hattiger	head		head		-
SETC	hatmanc		head		head		-
SETC	cap	   	head		head		-
SETC	capknit		head		head		-
SETC	caprimup	head		head		-
SETC	capback		head		head		-
SETC	boxingcap	head		head		-
SETC	bowler		head		head		-
SETC	boater		head		head		-
SETC	beret		head		head		-
SETC	captruck	head		head		-
SETC	capover		head		head		-
SETC	capovereye	head		head		-
SETC	capside		head		head		-
SETC	bandknots	head		flatears	-
SETC	skullycap	head		flatears	-
SETC	bikerhelmet	head		head		-
SETC	moto		head		flatears	-
ENDIGNORE	balaclava
ENDIGNORE	gimpmask
ENDIGNORE 	cornrows
ENDIGNORE	tramline

IGNORE	balaclava
IGNORE	gimpmask
SETC	moto		head		flatears	-
SETC	skullycap	head		flatears	-
ENDIGNORE	balaclava
ENDIGNORE	gimpmask

#change legs model when wearing boots
IGNORE	legs
IGNORE	chonger
IGNORE	boxingshort
IGNORE	shorts
IGNORE	cutoff
SETC	biker		legs	worktrboot	-
SETC	boxingshoe	legs	worktrboot	-
ENDIGNORE	legs
ENDIGNORE	chonger
ENDIGNORE	boxingshort
ENDIGNORE	shorts
ENDIGNORE	cutoff

#change necklaces to bigger one for jackets and shirts
EXCLUSIVE neck
SETC	hoodya		necklace	neck_hoodya	-
SETC	shirtb		necklace	neck_shirt	-
SETC	trackytop1	necklace	neck_tracky	-
SETC	tshirt		necklace	neck_tracky	-
SETC	tshirt2		necklace	neck_tracky	-
SETC	field		necklace	neck_field	-
SETC	baseball	necklace	neck_tracky	-
SETC	bbjack		necklace	neck_bb		-
SETC	denim		necklace	neck_shirt	-
SETC	sweat		necklace	neck_tracky	-
SETC	wcoat		necklace	neck_shirt	-
SETC	coach		necklace	neck_shirt	-
SETC	painter		necklace	neck_shirt	-
SETC	shirta		necklace	neck_shirt	-
SETC	hawaii		necklace	neck_shirt	-
SETC	hoodjack	necklace	neck_hoodya	-
SETC	suit1		necklace	neck_shirt	-
SETC	suit2		necklace	neck_shirt	-
SETC	leather		necklace	neck_shirt	-
SETC	policeshirt	necklace	neck_shirt	-
ENDEXCLUSIVE neck

EXCLUSIVE neck2
SETC	hoodya		necklace	neck2_hoodya	-
SETC	shirtb		necklace	neck2_shirt	-
SETC	field		necklace	neck2_field	-
SETC	bbjack		necklace	neck2_bb	-
SETC	denim		necklace	neck2_shirt	-
SETC	wcoat		necklace	neck2_shirt	-
SETC	coach		necklace	neck2_shirt	-
SETC	painter		necklace	neck2_shirt	-
SETC	shirta		necklace	neck2_shirt	-
SETC	hawaii		necklace	neck2_shirt	-
SETC	hoodjack	necklace	neck2_hoodya	-
SETC	suit1		necklace	neck2_shirt	-
SETC	suit2		necklace	neck2_shirt	-
SETC	leather		necklace	neck2_shirt	-
SETC	policeshirt	necklace	neck2_shirt	-
ENDEXCLUSIVE neck2

EXCLUSIVE watch
SETC	hoodya		watch		watch_hoody	-
SETC	shirtb		watch		watch_hoody	-
SETC	field		watch		watch_hoody	-
SETC	trackytop1	watch		watch_hoody	-
SETC	bbjack		watch		watch_hoody	-
SETC	sweat		watch		watch_hoody	-
SETC	coach		watch		watch_hoody	-
SETC	hoodya		watch		watch_hoody	-
SETC	hoodjack	watch		watch_hoody	-
SETC	leather		watch		watch_hoody	-
ENDEXCLUSIVE watch

# extras that get in the way of certain clothes
HIDE	helmet		glasses
HIDE	moto		glasses
HIDE	boxingcap	glasses
HIDE	hockeymask	glasses
HIDE	balaclava	head

# cutscene replacement models
CUTS 	head		cs_head
CUTS	cornrows	cs_cornrows
CUTS 	afro		cs_afro
CUTS	highafro	cs_highafro
CUTS	wedge		cs_wedge
CUTS	slope		cs_slope
CUTS 	flattop		cs_flattop
CUTS	tramline	cs_tramline
CUTS	groovecut	cs_groovecut
CUTS	jheri		cs_jheri
CUTS 	mohawk		cs_mohawk
CUTS	elvishair	cs_elvishair
CUTS 	gimpmask	cs_gimpmask
CUTS 	hands		cs_hands
CUTS 	bandana		cs_bandana
CUTS	bandknots	cs_bandknots
CUTS	zorromask	cs_zorro
CUTS	bandmask	cs_bandmask
CUTS	flatears	cs_flatears
CUTS	bikerhelmet	cs_bikerhelmet

end