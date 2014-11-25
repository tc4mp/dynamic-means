#ifndef __RESULTS_HPP
namespace dmeans{
template<class Model>
class Results{
	public:
		std::map<uint64_t, uint64_t> lbls;
		std::map<uint64_t, typename Model::Parameter> prms;
		double tTaken;
		double cost;
};
}
#define __RESULTS_HPP
#endif /* __RESULTS_HPP */
