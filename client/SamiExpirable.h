/*
 * SamiExpirable.h
 * 
 * 
 */

#ifndef SamiExpirable_H_
#define SamiExpirable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiExpirable: public SamiObject {
public:
    SamiExpirable();
    SamiExpirable(String* json);
    virtual ~SamiExpirable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiExpirable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    Integer* getPTimeLength();
    void setPTimeLength(Integer* pTime_length);
    String* getPUnitOfTime();
    void setPUnitOfTime(String* pUnit_of_time);

private:
    String* pDescription;
String* pType_hint;
Integer* pTime_length;
String* pUnit_of_time;
};

} /* namespace Swagger */

#endif /* SamiExpirable_H_ */
