/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_59
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\block_59.h
*********************************************************************/

#ifndef block_59_H
#define block_59_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBlock_57
class block_57;

//## package Default

//## class block_59
class block_59 {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    block_59(void);
    
    //## auto_generated
    ~block_59(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const block_57* getItsBlock_57(void) const;
    
    //## auto_generated
    void setItsBlock_57(block_57* const p_block_57);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    block_57* itsBlock_57;		//## link itsBlock_57
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBlock_57(block_57* const p_block_57);
    
    //## auto_generated
    void _setItsBlock_57(block_57* const p_block_57);
    
    //## auto_generated
    void _clearItsBlock_57(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_59.h
*********************************************************************/
