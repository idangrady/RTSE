/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_57
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\block_57.h
*********************************************************************/

#ifndef block_57_H
#define block_57_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBlock_59
class block_59;

//## package Default

//## class block_57
class block_57 {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    block_57(void);
    
    //## auto_generated
    ~block_57(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const block_59* getItsBlock_59(void) const;
    
    //## auto_generated
    void setItsBlock_59(block_59* const p_block_59);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    block_59* itsBlock_59;		//## link itsBlock_59
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBlock_59(block_59* const p_block_59);
    
    //## auto_generated
    void _setItsBlock_59(block_59* const p_block_59);
    
    //## auto_generated
    void _clearItsBlock_59(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_57.h
*********************************************************************/
