/*
 * SamiTimePeriodUsable.h
 * 
 * 
 */

#ifndef SamiTimePeriodUsable_H_
#define SamiTimePeriodUsable_H_

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

class SamiTimePeriodUsable: public SamiObject {
public:
    SamiTimePeriodUsable();
    SamiTimePeriodUsable(String* json);
    virtual ~SamiTimePeriodUsable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTimePeriodUsable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    Integer* getPMaxUse();
    void setPMaxUse(Integer* pMax_use);
    Integer* getPTimeLength();
    void setPTimeLength(Integer* pTime_length);
    String* getPUnitOfTime();
    void setPUnitOfTime(String* pUnit_of_time);

private:
    String* pDescription;
String* pType_hint;
Integer* pMax_use;
Integer* pTime_length;
String* pUnit_of_time;
};

} /* namespace Swagger */

#endif /* SamiTimePeriodUsable_H_ */
