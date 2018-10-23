#ifndef HGL_DB_FIELD_TYPE_INCLUDE
#define HGL_DB_FIELD_TYPE_INCLUDE

namespace hgl
{
    namespace db
    {
        /**
         * 字段基本类型枚举
         */
        enum FieldBaseType
        {
            fbtNone=0,

            fbtBool,

            fbtInt8,			fbtInt16,			fbtInt32,			fbtInt64,
            fbtUint8,			fbtUint16,			fbtUint32,			fbtUint64,

            fbtFloat,
            fbtDouble,

            fbtChar8,           ///<单字节字符
            fbtChar16,          ///<双字节字符
            fbtChar32,          ///<四字节字符

            fbtEnd
        };//enum FieldBaseType

        /**
         * 字段组合类型
         */
        enum FieldComboType
        {
            fctNone=0,

            fctSingle,                  ///<单一数据
            fctArray,                   ///<定长阵列
            fctVarArray,                ///<变长阵列
            fctStruct,                  ///<结构体，自由组成

            fctEnd
        };//enum FieldComboType

        /**
         * 字段类型
         */
        class FieldType
        {
            FieldBaseType base_type;    ///<基本类型
            FieldComboType combo_type;  ///<组合类型

        public:
        };//class FieldType
    }//namespace db
}//namespace hgl
#endif//HGL_DB_FIELD_TYPE_INCLUDE
