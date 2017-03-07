/*
 * SamiRawEmailResource.h
 * 
 * 
 */

#ifndef SamiRawEmailResource_H_
#define SamiRawEmailResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiRawEmailResource: public SamiObject {
public:
    SamiRawEmailResource();
    SamiRawEmailResource(String* json);
    virtual ~SamiRawEmailResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRawEmailResource* fromJson(String* obj);

    String* getPBody();
    void setPBody(String* pBody);
    String* getPFrom();
    void setPFrom(String* pFrom);
    Boolean* getPHtml();
    void setPHtml(Boolean* pHtml);
    IList* getPRecipients();
    void setPRecipients(IList* pRecipients);
    String* getPSubject();
    void setPSubject(String* pSubject);

private:
    String* pBody;
String* pFrom;
Boolean* pHtml;
IList* pRecipients;
String* pSubject;
};

} /* namespace Swagger */

#endif /* SamiRawEmailResource_H_ */
