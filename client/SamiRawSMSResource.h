/*
 * SamiRawSMSResource.h
 * 
 * 
 */

#ifndef SamiRawSMSResource_H_
#define SamiRawSMSResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiRawSMSResource: public SamiObject {
public:
    SamiRawSMSResource();
    SamiRawSMSResource(String* json);
    virtual ~SamiRawSMSResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRawSMSResource* fromJson(String* obj);

    String* getPFrom();
    void setPFrom(String* pFrom);
    IList* getPRecipients();
    void setPRecipients(IList* pRecipients);
    String* getPText();
    void setPText(String* pText);

private:
    String* pFrom;
IList* pRecipients;
String* pText;
};

} /* namespace Swagger */

#endif /* SamiRawSMSResource_H_ */
