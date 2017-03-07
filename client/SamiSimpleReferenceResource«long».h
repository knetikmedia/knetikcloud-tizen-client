/*
 * SamiSimpleReferenceResource«long».h
 * 
 * 
 */

#ifndef SamiSimpleReferenceResource«long»_H_
#define SamiSimpleReferenceResource«long»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiSimpleReferenceResource«long»: public SamiObject {
public:
    SamiSimpleReferenceResource«long»();
    SamiSimpleReferenceResource«long»(String* json);
    virtual ~SamiSimpleReferenceResource«long»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSimpleReferenceResource«long»* fromJson(String* obj);

    Long* getPId();
    void setPId(Long* pId);
    String* getPName();
    void setPName(String* pName);

private:
    Long* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiSimpleReferenceResource«long»_H_ */
