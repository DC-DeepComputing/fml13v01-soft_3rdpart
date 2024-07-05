#!/bin/bash

mod="$1"
model="$2"

# uppercase version of $mod and $model
MOD=`echo "$mod" | tr 'a-z' 'A-Z'`
MODEL=`echo "$model" | tr 'a-z' 'A-Z'`

function echo_head_comment
{
	echo "/**"
	echo " ******************************************************************************"
	echo " * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd."
	echo " * @file $fname"
	echo " * @author StarFive FW Team"
	echo " * @brief"
	echo " ******************************************************************************"
	echo " */"
}

function mk_file_dir
{
	for f in "$@"
	do
		local fdir=`dirname $f`
		if [ ! -d "$fdir" ]; then
			mkdir -p "$fdir"
			echo mkdir -p "$fdir"
		fi
	done
}

function touch_h
{
	for f in "$@"
	do
		mk_file_dir $f
		if [ -f $f ]; then
			echo "skip $f"
			continue
		fi
		echo touch $f
		# generate an empty file
		fname=${f##*/}
		FNAME=`echo $fname | tr '[a-z]' '[A-Z]'`
		FTITLE_H=${FNAME/./_}
		echo_head_comment > $f
		echo "#ifndef __${FTITLE_H}_">>$f
		echo "#define __${FTITLE_H}_">>$f
		echo "">>$f
		
		echo "#ifdef __cplusplus">>$f
		echo "extern \"C\" {">>$f
		echo "#endif /* __cplusplus */">>$f
		echo "">>$f
		echo "">>$f
		echo "">>$f
		
		echo "#ifdef __cplusplus">>$f
		echo "}">>$f
		echo "#endif /* __cplusplus */">>$f
		echo "">>$f
		
		echo "#endif /* __${FTITLE_H}_ */">>$f
		echo "">>$f
	done
}

function touch_c
{
	for f in "$@"
	do
		mk_file_dir $f
		if [ -f $f ]; then
			echo "skip $f"
			continue
		fi
		echo touch $f
		# generate an empty file
		fname=${f##*/}
		echo_head_comment > $f
		echo "">>$f
		echo "">>$f
		echo "">>$f
	done
}

function touch_hal_mod_c
{
	for f in "$@"
	do
		mk_file_dir $f
		if [ -f $f ]; then
			echo "skip $f"
			continue
		fi
		echo touch $f
		# generate an empty file
		fname=${f##*/}
		echo_head_comment > $f
		echo "#include \"bsp_include.h\"">>$f
		echo "#include \"hal_include.h\"">>$f
		echo "">>$f
		echo "#ifdef HAL_${MOD}_ENABLED">>$f
		echo "">>$f
		echo "">>$f
		echo "#endif /* HAL_${MOD}_ENABLED */">>$f
		echo "">>$f
	done
}

function touch_hal_mod_model_h
{
	for f in "$@"
	do
		mk_file_dir $f
		if [ -f $f ]; then
			echo "skip $f"
			continue
		fi
		echo touch $f
		# generate an empty file
		fname=${f##*/}
		FNAME=`echo $fname | tr '[a-z]' '[A-Z]'`
		FTITLE_H=${FNAME/./_}
		echo_head_comment > $f
		echo "#ifndef __${FTITLE_H}_">>$f
		echo "#define __${FTITLE_H}_">>$f
		echo "">>$f
		
		echo "#ifdef __cplusplus">>$f
		echo "extern \"C\" {">>$f
		echo "#endif /* __cplusplus */">>$f
		echo "">>$f
		echo "typedef struct">>$f
		echo "{">>$f
		echo "    /* TODO: add ${mod} ${model} registers define */">>$f
		echo "} ${mod}_regs_t;">>$f
		echo "">>$f
		echo "#ifdef __cplusplus">>$f
		echo "}">>$f
		echo "#endif /* __cplusplus */">>$f
		echo "">>$f
		
		echo "#endif /* __${FTITLE_H}_ */">>$f
		echo "">>$f
	done
}

function touch_hal_mod_model_c
{
	for f in "$@"
	do
		mk_file_dir $f
		if [ -f $f ]; then
			echo "skip $f"
			continue
		fi
		echo touch $f
		# generate an empty file
		fname=${f##*/}
		echo_head_comment > $f
		echo "#include \"bsp_include.h\"">>$f
		echo "#include \"hal_include.h\"">>$f
		echo "">>$f
		echo "#if defined(HAL_${MOD}_ENABLED) && defined(HAL_${MOD}_${MODEL})">>$f
		echo "">>$f
		echo "#include \"hal_${mod}_${model}.h\"">>$f
		echo "">>$f
		echo "">>$f
		echo "#endif /* HAL_${MOD}_ENABLED && HAL_${MOD}_${MODEL} */">>$f
		echo "">>$f
	done
}

function touch_hal_mod_tests_h
{
	for f in "$@"
	do
		mk_file_dir $f
		if [ -f $f ]; then
			echo "skip $f"
			continue
		fi
		echo touch $f
		# generate an empty file
		fname=${f##*/}
		FNAME=`echo $fname | tr '[a-z]' '[A-Z]'`
		FTITLE_H=${FNAME/./_}
		echo_head_comment > $f
		echo "#ifndef __${FTITLE_H}_">>$f
		echo "#define __${FTITLE_H}_">>$f
		echo "">>$f
		
		echo "#ifdef __cplusplus">>$f
		echo "extern \"C\" {">>$f
		echo "#endif /* __cplusplus */">>$f
		echo "">>$f
		echo "int run_${mod}_tests(void *dev, void *p0, void *p1, void *p2, void *p3);">>$f
		echo "">>$f
		echo "#ifdef __cplusplus">>$f
		echo "}">>$f
		echo "#endif /* __cplusplus */">>$f
		echo "">>$f
		
		echo "#endif /* __${FTITLE_H}_ */">>$f
		echo "">>$f
	done
}

function touch_hal_mod_model_tests_c
{
	for f in "$@"
	do
		mk_file_dir $f
		if [ -f $f ]; then
			echo "skip $f"
			continue
		fi
		echo touch $f
		# generate an empty file
		fname=${f##*/}
		echo_head_comment > $f
		echo "#include \"bsp_include.h\"">>$f
		echo "#include \"hal_include.h\"">>$f
		echo "#include \"hal_tests_include.h\"">>$f
		echo "">>$f
		echo "#if defined(HAL_${MOD}_ENABLED) && defined(HAL_${MOD}_${MODEL})">>$f
		echo "">>$f
		echo "#include \"hal_${mod}_tests.inc\"">>$f
		echo "">>$f
		echo "int run_${mod}_tests(void *dev, void *p0, void *p1, void *p2, void *p3)">>$f
		echo "{">>$f
		echo "    return 0;">>$f
		echo "}">>$f
		echo "">>$f
		echo "#endif /* HAL_${MOD}_ENABLED && HAL_${MOD}_${MODEL} */">>$f
		echo "">>$f
	done
}

function insert_b4_anchor
{
	local file="$1"
	local anchor="$2"
	local new_item="$3"

#	echo "grep \"${new_item}\" ${file} || sed -i \"/${anchor}/i\\${new_item}\" ${file}"
	grep "${new_item}" ${file} || sed -i "/${anchor}/i\\${new_item}" ${file}
}


function insert_after_anchor
{
	local file="$1"
	local anchor="$2"
	local new_item="$3"
	local multiple_allowed="$4"

#	echo "=== grep \"${new_item}\" ${file} || sed -i \"/${anchor}/a\\${new_item}\" ${file}"
	if [ ! "$multiple_allowed" == "true" ]; then
		grep "${new_item}" ${file} || sed -i "/${anchor}/a\\${new_item}" ${file}
	else
		sed -i "/${anchor}/a\\${new_item}" ${file}
	fi
}

#----- main() start from here

if [ -z "$mod" -o -z "$model" ]; then
	echo "usage: $0 <mod> <model>"
	exit 1
fi

# bsp/
#	include/bsp_hal_<hal>.h
#	src/bsp_hal_<hal>.c
touch_h bsp/include/bsp_hal_${mod}.h
touch_c bsp/src/bsp_hal_${mod}.c

file=bsp/include/bsp_include.h
anchor="#include \"bsp_hal_conf.h\""
new_item="#include \"bsp_hal_${mod}.h\""
insert_after_anchor "${file}" "${anchor}" "${new_item}"

# bsp/include/bsp_hal_conf.h
anchor="chip-dependent module selection"
new_item="#define HAL_${MOD}_${MODEL}"
file=bsp/include/bsp_hal_conf.h
insert_after_anchor "${file}" "${anchor}" "${new_item}"

# hal/
#	include/hal_<hal>.h
#	src/hal_<hal>.c
#	src/hal_<hal>_<model>.c
#	src/hal_<hal>_<model>.h
touch_h					hal/include/hal_${mod}.h
touch_hal_mod_c			hal/src/${mod}/hal_${mod}.c
touch_hal_mod_model_c	hal/src/${mod}/hal_${mod}_${model}.c
touch_hal_mod_model_h	hal/src/${mod}/hal_${mod}_${model}.h

file=hal/include/hal_include.h
anchor="#include \"hal_conf.h\""
new_item="#include \"hal_${mod}.h\""
insert_after_anchor "${file}" "${anchor}" "${new_item}"

# hal/tests/
#	include/hal_<hal>_tests.h
#	src/hal_<hal>_tests.inc
#	src/hal_<hal>_<model>_tests.c
touch_hal_mod_tests_h		hal/tests/include/hal_${mod}_tests.h
touch_c 					hal/tests/src/${mod}/hal_${mod}_tests.inc
touch_hal_mod_model_tests_c	hal/tests/src/${mod}/hal_${mod}_${model}_tests.c

file=hal/tests/include/hal_tests_include.h
anchor="#include \"hal_tests_conf.h\""
new_item="#include \"hal_${mod}_tests.h\""
insert_after_anchor "${file}" "${anchor}" "${new_item}"

# hal/tests/include/hal_tests_conf_template.h
anchor_ndef="#ifndef HAL_ALL_TESTS_ENABLED"
anchor_def="#ifdef HAL_ALL_TESTS_ENABLED"
new_item_ndef="//#define HAL_${MOD}_TESTS_ENABLED"
new_item_def="#define HAL_${MOD}_TESTS_ENABLED"
file=hal/tests/include/hal_tests_conf_template.h
insert_after_anchor "${file}" "${anchor_ndef}" "${new_item_ndef}"
insert_after_anchor "${file}" "${anchor_def}" "${new_item_def}" true
# include/hal_tests_conf.h
file=include/hal_tests_conf.h
insert_after_anchor "${file}" "${anchor_ndef}" "${new_item_ndef}"
insert_after_anchor "${file}" "${anchor_def}" "${new_item_def}" true

# hal/include/hal_conf_template.h
anchor="chip-independent module selection"
new_item="#define HAL_${MOD}_ENABLED"
file=hal/include/hal_conf_template.h
insert_after_anchor "${file}" "${anchor}" "${new_item}"
# include/hal_conf.h
file=include/hal_conf.h
insert_after_anchor "${file}" "${anchor}" "${new_item}"

#hal/defs.mk
## hal/${mod}
#SOURCE_DIRS += $(HAL_DIR)/src/${mod} $(HAL_DIR)/tests/src/${mod}
FIND_MK=`grep -P "^# hal/${mod}$\s*" hal/defs.mk`
if [ -z "$FIND_MK" ]; then
	hal_defs_mk=hal/defs.mk
	echo "" >> $hal_defs_mk
	echo "# hal/${mod}" >> $hal_defs_mk
	echo "SOURCE_DIRS += \$(HAL_DIR)/src/${mod} \$(HAL_DIR)/tests/src/${mod}" >> $hal_defs_mk
	echo "" >> $hal_defs_mk
	echo \'hal/${mod}\' added in $hal_defs_mk
fi

echo job done!
