   /*               {Table  of  Derivations}


                            private derivation      protected derivation     public derivation

    1..private   members         NOT                     NOT                    NOT
    2..protected members       PRIVATE                 PROTECTED               PROTECTED
    3..public    members       PRIVATE                  PROTECTED               PUBLIC


    <--------------------------------------SYNTAX-------------------------------------->
   */

 1__Single Inhertance.

 /*
 class base{

 };
 class   derived  :visibility-mode   base{
 
 };*/
  
 2__Multi Level Inheritance.

 /*class base{

 };
 class   derived  :visibility-mode   base{
 
 };
  
 class   derived  :visibility-mode   base{
 
 };
  */
3__Multiple   Inheritance.

/*
class Derived :visibility-mode base1,visibility-mode base2{

};





*/







 