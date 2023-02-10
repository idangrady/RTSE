/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_59
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\block_59.cpp
*********************************************************************/

//## auto_generated
#include "block_59.h"
//## link itsBlock_57
#include "block_57.h"
//## package Default

//## class block_59
block_59::block_59(void) : itsBlock_57(NULL) {
}

block_59::~block_59(void) {
    cleanUpRelations();
}

const block_57* block_59::getItsBlock_57(void) const {
    return itsBlock_57;
}

void block_59::setItsBlock_57(block_57* const p_block_57) {
    if(p_block_57 != NULL)
        {
            p_block_57->_setItsBlock_59(this);
        }
    _setItsBlock_57(p_block_57);
}

void block_59::cleanUpRelations(void) {
    if(itsBlock_57 != NULL)
        {
            const block_59* p_block_59 = itsBlock_57->getItsBlock_59();
            if(p_block_59 != NULL)
                {
                    itsBlock_57->__setItsBlock_59(NULL);
                }
            itsBlock_57 = NULL;
        }
}

void block_59::__setItsBlock_57(block_57* const p_block_57) {
    itsBlock_57 = p_block_57;
}

void block_59::_setItsBlock_57(block_57* const p_block_57) {
    if(itsBlock_57 != NULL)
        {
            itsBlock_57->__setItsBlock_59(NULL);
        }
    __setItsBlock_57(p_block_57);
}

void block_59::_clearItsBlock_57(void) {
    itsBlock_57 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_59.cpp
*********************************************************************/
