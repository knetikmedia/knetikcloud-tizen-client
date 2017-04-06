/*
 * SamiBreEvent.h
 * 
 * 
 */

#ifndef SamiBreEvent_H_
#define SamiBreEvent_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::String;


namespace Swagger {

class SamiBreEvent: public SamiObject {
public:
    SamiBreEvent();
    SamiBreEvent(String* json);
    virtual ~SamiBreEvent();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreEvent* fromJson(String* obj);

    String* getPEventName();
    void setPEventName(String* pEvent_name);
    SamiObject* getPParams();
    void setPParams(SamiObject* pParams);

private:
    String* pEvent_name;
SamiObject* pParams;
};

} /* namespace Swagger */

#endif /* SamiBreEvent_H_ */
