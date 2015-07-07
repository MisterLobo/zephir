
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Test_Properties_PublicProperties) {

	ZEPHIR_REGISTER_CLASS(Test\\Properties, PublicProperties, test, properties_publicproperties, test_properties_publicproperties_method_entry, 0);

	/**
	 * This is a public property with no initial value
	 */
	zend_declare_property_null(test_properties_publicproperties_ce, SL("someNull"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with initial null value
	 */
	zend_declare_property_null(test_properties_publicproperties_ce, SL("someNullInitial"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with initial boolean false
	 */
	zend_declare_property_bool(test_properties_publicproperties_ce, SL("someFalse"), 0, ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with initial boolean true
	 */
	zend_declare_property_bool(test_properties_publicproperties_ce, SL("someTrue"), 1, ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with an initial integer value
	 */
	zend_declare_property_long(test_properties_publicproperties_ce, SL("someInteger"), 10, ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with an initial double value
	 */
	zend_declare_property_double(test_properties_publicproperties_ce, SL("someDouble"), 10.25, ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with an initial string value
	 */
	zend_declare_property_string(test_properties_publicproperties_ce, SL("someString"), "test", ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with an initial empty-array value
	 */
	zend_declare_property_null(test_properties_publicproperties_ce, SL("someEmptyArray"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * This is a public property with an initial array value
	 */
	zend_declare_property_null(test_properties_publicproperties_ce, SL("someArray"), ZEND_ACC_PUBLIC TSRMLS_CC);

	/**
	 * It's needed to test ide stubs
	 * @link https://github.com/phalcon/zephir/issues/731
	 */
	zend_declare_property_null(test_properties_publicproperties_ce, SL("someArrayWithSpecifyKeys"), ZEND_ACC_PROTECTED TSRMLS_CC);

	/**
	 * It's needed to test ide stubs
	 * @link https://github.com/phalcon/zephir/issues/731
	 */
	zend_declare_property_null(test_properties_publicproperties_ce, SL("someArrayWithSubArray"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(test_properties_publicproperties_ce, SL("someGetterSetterArray"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(test_properties_publicproperties_ce, SL("testPropertyFromSelfConstantValue"), 123, ZEND_ACC_PUBLIC TSRMLS_CC);

	zend_declare_property_long(test_properties_publicproperties_ce, SL("testPropertyFromClassNameConstantValue"), 123, ZEND_ACC_PUBLIC TSRMLS_CC);

	test_properties_publicproperties_ce->create_object = zephir_init_properties_Test_Properties_PublicProperties;
	zend_declare_class_constant_long(test_properties_publicproperties_ce, SL("TEST_CONST"), 123 TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Test_Properties_PublicProperties, setSomeGetterSetterArray) {

	zval *someGetterSetterArray;

	zephir_fetch_params(0, 1, 0, &someGetterSetterArray);



	zephir_update_property_this(this_ptr, SL("someGetterSetterArray"), someGetterSetterArray TSRMLS_CC);

}

PHP_METHOD(Test_Properties_PublicProperties, getSomeGetterSetterArray) {


	RETURN_MEMBER(this_ptr, "someGetterSetterArray");

}

PHP_METHOD(Test_Properties_PublicProperties, test394Issue) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(_0);
	zephir_read_property(&_0, this_ptr, SL("someTrue"), PH_NOISY_CC);
	RETURN_CCTOR(_0);

}

static zend_object_value zephir_init_properties_Test_Properties_PublicProperties(zend_class_entry *class_type TSRMLS_DC) {

		zval *_3 = NULL, *_4 = NULL;
		zval *_0, *_1 = NULL, *_2, *_5, *_6, *_7;

		ZEPHIR_MM_GROW();
	
	{
		zval *this_ptr = NULL;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		_0 = zephir_fetch_nproperty_this(this_ptr, SL("someGetterSetterArray"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1);
			array_init(_1);
			zephir_update_property_this(this_ptr, SL("someGetterSetterArray"), _1 TSRMLS_CC);
		}
		_2 = zephir_fetch_nproperty_this(this_ptr, SL("someArrayWithSubArray"), PH_NOISY_CC);
		if (Z_TYPE_P(_2) == IS_NULL) {
			ZEPHIR_INIT_VAR(_3);
			zephir_create_array(_3, 4, 0 TSRMLS_CC);
			ZEPHIR_INIT_VAR(_4);
			zephir_create_array(_4, 1, 0 TSRMLS_CC);
			add_assoc_stringl_ex(_4, SS("class"), SL("alert alert-success"), 1);
			zephir_array_update_string(&_3, SL("success"), &_4, PH_COPY | PH_SEPARATE);
			ZEPHIR_INIT_NVAR(_4);
			zephir_create_array(_4, 1, 0 TSRMLS_CC);
			add_assoc_stringl_ex(_4, SS("class"), SL("alert alert-info"), 1);
			zephir_array_update_string(&_3, SL("info"), &_4, PH_COPY | PH_SEPARATE);
			ZEPHIR_INIT_NVAR(_4);
			zephir_create_array(_4, 1, 0 TSRMLS_CC);
			add_assoc_stringl_ex(_4, SS("class"), SL("alert alert-warning"), 1);
			zephir_array_update_string(&_3, SL("warning"), &_4, PH_COPY | PH_SEPARATE);
			ZEPHIR_INIT_NVAR(_4);
			zephir_create_array(_4, 1, 0 TSRMLS_CC);
			add_assoc_stringl_ex(_4, SS("class"), SL("alert alert-danger"), 1);
			zephir_array_update_string(&_3, SL("danger"), &_4, PH_COPY | PH_SEPARATE);
			zephir_update_property_this(this_ptr, SL("someArrayWithSubArray"), _3 TSRMLS_CC);
		}
		_5 = zephir_fetch_nproperty_this(this_ptr, SL("someArrayWithSpecifyKeys"), PH_NOISY_CC);
		if (Z_TYPE_P(_5) == IS_NULL) {
			ZEPHIR_INIT_NVAR(_3);
			zephir_create_array(_3, 3, 0 TSRMLS_CC);
			add_assoc_stringl_ex(_3, SS("a"), SL("A"), 1);
			add_assoc_stringl_ex(_3, SS("b"), SL("B"), 1);
			add_assoc_stringl_ex(_3, SS("c"), SL("C"), 1);
			zephir_update_property_this(this_ptr, SL("someArrayWithSpecifyKeys"), _3 TSRMLS_CC);
		}
		_6 = zephir_fetch_nproperty_this(this_ptr, SL("someArray"), PH_NOISY_CC);
		if (Z_TYPE_P(_6) == IS_NULL) {
			ZEPHIR_INIT_NVAR(_3);
			zephir_create_array(_3, 4, 0 TSRMLS_CC);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_LONG(_1, 1);
			zephir_array_fast_append(_3, _1);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_LONG(_1, 2);
			zephir_array_fast_append(_3, _1);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_LONG(_1, 3);
			zephir_array_fast_append(_3, _1);
			ZEPHIR_INIT_NVAR(_1);
			ZVAL_LONG(_1, 4);
			zephir_array_fast_append(_3, _1);
			zephir_update_property_this(this_ptr, SL("someArray"), _3 TSRMLS_CC);
		}
		_7 = zephir_fetch_nproperty_this(this_ptr, SL("someEmptyArray"), PH_NOISY_CC);
		if (Z_TYPE_P(_7) == IS_NULL) {
			ZEPHIR_INIT_NVAR(_1);
			array_init(_1);
			zephir_update_property_this(this_ptr, SL("someEmptyArray"), _1 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJVAL_P(this_ptr);
	}

}

