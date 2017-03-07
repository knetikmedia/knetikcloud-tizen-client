/*
 * SamiPollAnswerResource.h
 * 
 * 
 */

#ifndef SamiPollAnswerResource_H_
#define SamiPollAnswerResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiPollAnswerResource: public SamiObject {
public:
    SamiPollAnswerResource();
    SamiPollAnswerResource(String* json);
    virtual ~SamiPollAnswerResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPollAnswerResource* fromJson(String* obj);

    Integer* getPCount();
    void setPCount(Integer* pCount);
    String* getPKey();
    void setPKey(String* pKey);
    String* getPText();
    void setPText(String* pText);

private:
    Integer* pCount;
String* pKey;
String* pText;
};

} /* namespace Swagger */

#endif /* SamiPollAnswerResource_H_ */
