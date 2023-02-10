/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_57
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\block_57.cpp
*********************************************************************/

//## auto_generated
#include "block_57.h"
//## link itsBlock_59
#include "block_59.h"
//## package Default

//## class block_57
block_57::block_57(void) : itsBlock_59(NULL) {
}

block_57::~block_57(void) {
    cleanUpRelations();
}

const block_59* block_57::getItsBlock_59(void) const {
    return itsBlock_59;
}

void block_57::setItsBlock_59(block_59* const p_block_59) {
    if(p_block_59 != NULL)
        {
            p_block_59->_setItsBlock_57(this);
        }
    _setItsBlock_59(p_block_59);
}

void block_57::cleanUpRelations(void) {
    if(itsBlock_59 != NULL)
        {
            const block_57* p_block_57 = itsBlock_59->getItsBlock_57();
            if(p_block_57 != NULL)
                {
                    itsBlock_59->__setItsBlock_57(NULL);
                }
            itsBlock_59 = NULL;
        }
}

void block_57::__setItsBlock_59(block_59* const p_block_59) {
    itsBlock_59 = p_block_59;
}

void block_57::_setItsBlock_59(block_59* const p_block_59) {
    if(itsBlock_59 != NULL)
        {
            itsBlock_59->__setItsBlock_57(NULL);
        }
    __setItsBlock_59(p_block_59);
}

void block_57::_clearItsBlock_59(void) {
    itsBlock_59 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_57.cpp
*********************************************************************/
