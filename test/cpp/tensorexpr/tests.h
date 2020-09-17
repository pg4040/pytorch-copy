#pragma once

/**
 * See README.md for instructions on how to add a new test.
 */
#include <c10/macros/Export.h>
#include <torch/csrc/WindowsTorchApiMacro.h>

namespace torch {
namespace jit {

#define TH_FORALL_TENSOREXPR_TESTS(_)       \
  _(ExprBasicValueTest)                     \
  _(ExprBasicValueTest02)                   \
  _(ExprLetTest01)                          \
  _(ExprLetStmtTest01)                      \
  _(ExprLetTest02)                          \
  _(ExprIntTest)                            \
  _(ExprFloatTest)                          \
  _(ExprByteTest)                           \
  _(ExprCharTest)                           \
  _(ExprShortTest)                          \
  _(ExprLongTest)                           \
  _(ExprHalfTest)                           \
  _(ExprDoubleTest)                         \
  _(ExprVectorAdd01)                        \
  _(ExprCompareSelectEQ)                    \
  _(ExprCompareSelectDtypes)                \
  _(ExprIntrinsicsDtypes)                   \
  _(ExprSubstitute01)                       \
  _(ExprMath01)                             \
  _(ExprUnaryMath01)                        \
  _(ExprBinaryMath01)                       \
  _(ExprDynamicShapeAdd)                    \
  _(ExprBitwiseOps)                         \
  _(IRPrinterBasicValueTest)                \
  _(IRPrinterBasicValueTest02)              \
  _(IRPrinterCastTest)                      \
  _(IRPrinterFunctionName)                  \
  _(ExprSimple01)                           \
  _(ExprLower01)                            \
  _(ExprSimple02)                           \
  _(ExprSliceHead)                          \
  _(ExprSliceHeadWhenFactorEqualsSize)      \
  _(ExprSliceHeadWhenFactorLargerThanSize)  \
  _(ExprSliceHeadWithLoopOptions)           \
  _(ExprSliceHeadWithNonZeroStart)          \
  _(ExprSliceTail)                          \
  _(ExprSliceTailWhenFactorEqualsSize)      \
  _(ExprSliceTailWhenFactorLargerThanSize)  \
  _(ExprSliceTailWithLoopOptions)           \
  _(ExprSliceAndNormalize)                  \
  _(ExprSliceWithVariableDimension)         \
  _(ExprSplitAndSlice)                      \
  _(ExprSplitWithTail)                      \
  _(ExprSplitWithTailNone)                  \
  _(ExprSplitWithMask01)                    \
  _(SplitWithTailWithLoopOptions)           \
  _(SplitWithMaskWithLoopOptions)           \
  _(ScheduleBroadcastAddBuffer)             \
  _(ScheduleFunctionCall01)                 \
  _(ScheduleInlineSimple)                   \
  _(ScheduleInlineFunc01)                   \
  _(ScheduleInlineRandom)                   \
  _(ScheduleInlineRandomUnrelated)          \
  _(ScheduleInlineRandomLowerDimensions)    \
  _(ScheduleInlineIntrinsics)               \
  _(ScheduleInlineRandWithIntrinsics)       \
  _(ScheduleSplitAThenInline)               \
  _(ScheduleSplitBThenInline)               \
  _(ScheduleSplitTwiceThenInline)           \
  _(ScheduleInlineThenSplit)                \
  _(ScheduleSplitInlineThenSplit)           \
  _(ScheduleSplitInlineSimplify)            \
  _(ScheduleInlineThreeMixedOnce)           \
  _(ScheduleInlineThreeMixedTwice)          \
  _(ScheduleInlineThreeMixedInner)          \
  _(ScheduleInlineThreeMixedSplit)          \
  _(ScheduleFuserStyle)                     \
  _(ScheduleFuserThreeArg)                  \
  _(ScheduleDynamicShape2D)                 \
  _(ReduceSum1D)                            \
  _(ReduceSum2D)                            \
  _(ReduceSum3D)                            \
  _(ReduceSum10D)                           \
  _(ReduceProduct)                          \
  _(ReduceMax)                              \
  _(ReduceMinCustomInitializer)             \
  _(ReduceAnyAll)                           \
  _(ReduceMatmul2D)                         \
  _(ReduceRfactorLike)                      \
  _(ReduceAsProducer)                       \
  _(ReduceAsConsumer)                       \
  _(SplitReduceAxis)                        \
  _(SplitNonReduceAxis)                     \
  _(ReorderedReductionInitializer)          \
  _(ReduceRfactor)                          \
  _(Reduce3DRfactorInternal)                \
  _(Reduce3DRfactorInner)                   \
  _(Reduce3DRfactorOuter)                   \
  _(Reduce3DRfactorWithOuter)               \
  _(Reduce3DRfactorRepeated)                \
  _(ReduceRfactorInsertionPoint)            \
  _(Reduce3DRfactorInsertionPoint)          \
  _(ReduceRepeatedInternalRfactor)          \
  _(ReduceSplitTail)                        \
  _(ReduceSplitNoTail)                      \
  _(ReduceOverSplitTail)                    \
  _(ReduceSplitMask)                        \
  _(ReduceSplitNoMask)                      \
  _(ReduceOverSplitMask)                    \
  _(ReduceSplitRfactor)                     \
  _(ReduceOverSplitRfactor)                 \
  _(ReduceInlineReduction)                  \
  _(ReduceInlineConsumer)                   \
  _(ReduceInlineReducerInternal)            \
  _(TypeTest01)                             \
  _(TypePropagation)                        \
  _(Cond01)                                 \
  _(IfThenElse01)                           \
  _(IfThenElse02)                           \
  _(IfThenElse03)                           \
  _(ATen_cast_Float)                        \
  _(ATennegInt)                             \
  _(ATennegFloat)                           \
  _(ATenaddInt)                             \
  _(ATenaddFloat)                           \
  _(ATensubInt)                             \
  _(ATensubFloat)                           \
  _(ATenlerp)                               \
  _(ATenaddcmulInt)                         \
  _(ATenaddcmulFloat)                       \
  _(ATenmulInt)                             \
  _(ATenmulFloat)                           \
  _(ATendivInt)                             \
  _(ATendivFloat)                           \
  _(ATenmaxInt)                             \
  _(ATenmaxFloat)                           \
  _(ATenminInt)                             \
  _(ATenminFloat)                           \
  _(ATenreciprocal)                         \
  _(ATenreluInt)                            \
  _(ATenreluFloat)                          \
  _(ATenlogFloat)                           \
  _(ATenlog10Float)                         \
  _(ATenlog2Float)                          \
  _(ATenexpFloat)                           \
  _(ATenerfFloat)                           \
  _(ATencosFloat)                           \
  _(ATeneqInt)                              \
  _(ATengeInt)                              \
  _(ATengtInt)                              \
  _(ATenleInt)                              \
  _(ATenltInt)                              \
  _(ConstantFoldSimple)                     \
  _(ConstantFoldTwoLayer)                   \
  _(ConstantFoldShifts)                     \
  _(ConstantFoldBitwise)                    \
  _(ConstantFoldMultiOp)                    \
  _(ConstantFoldMinMax)                     \
  _(ConstantFoldIntrinsics)                 \
  _(ConstantFoldCastToBool)                 \
  _(ConstantFoldWithVar)                    \
  _(ConditionalSelectFoldSimple)            \
  _(ConditionalSelectFoldTwoLayer)          \
  _(ConditionalSelectFoldWithVar)           \
  _(UnFoldableExpr)                         \
  _(HashSimple)                             \
  _(HashEquivalence)                        \
  _(HashEquivalenceRand)                    \
  _(HashEquivalenceAfterFolding)            \
  _(HashDifferenceTypes)                    \
  _(HashLargeExpression)                    \
  _(HashForLoopOptions)                     \
  _(SimplifyAdd)                            \
  _(SimplifySub)                            \
  _(SimplifyMultiLayer)                     \
  _(SimplifyMultiTerm)                      \
  _(SimplifyCasts)                          \
  _(SimplifyEliminatesNoOps)                \
  _(SimplifyMultiVar)                       \
  _(SimplifyEliminatesVar)                  \
  _(SimplifyAdds)                           \
  _(SimplifyMuls)                           \
  _(SimplifySubs)                           \
  _(SimplifyDiv)                            \
  _(SimplifyMultiOp)                        \
  _(SimplifyManyOps)                        \
  _(SimplifyFactorization)                  \
  _(SimplifyFactorizeUneven)                \
  _(SimplifyDeeperTerms)                    \
  _(SimplifyDeeperDifference)               \
  _(SimplifyFoldComplexDifference)          \
  _(SimplifyIfComponents)                   \
  _(SimplifyOpaqueTerms)                    \
  _(SimplifySymbolicMinMax)                 \
  _(SimplifyNestedMax)                      \
  _(SimplifyNestedMin)                      \
  _(SimplifyWontReorderFloat)               \
  _(SimplifyRoundModPattern)                \
  _(SimplifyRoundModPatternFactorization)   \
  _(SimplifyRoundModPatternMultivar)        \
  _(SimplifyDivisionScalarFactorization)    \
  _(SimplifyConstantBranches)               \
  _(SimplifyConstantCond)                   \
  _(SimplifyEliminateEmptyCond)             \
  _(SimplifyEliminateZeroLengthFor)         \
  _(SimplifyOneLoopFor)                     \
  _(SimplifyForWontLoseLoopOptions)         \
  _(SimplifyMultilevelFor)                  \
  _(SimplifyForCleansUp)                    \
  _(SimplifyEliminateEmptyFor)              \
  _(SimplifyFlattenBlock)                   \
  _(SimplifyEliminateZeroLengthAlloc)       \
  _(DontSimplifyRand)                       \
  _(SimplifyReorderForCond)                 \
  _(RegisterizerSimple)                     \
  _(RegisterizerLoop)                       \
  _(RegisterizerLoopFixedLoad)              \
  _(RegisterizerMultiVar)                   \
  _(RegisterizerVariableLoad)               \
  _(RegisterizerSymbolicIndices)            \
  _(RegisterizerEarlyStop)                  \
  _(RegisterizerMultiLoop)                  \
  _(RegisterizerRepeated)                   \
  _(RegisterizerNoLoads)                    \
  _(RegisterizerNoRepeatedStores)           \
  _(RegisterizerMultiVarOverlap)            \
  _(RegisterizerAllocs)                     \
  _(RegisterizerNoInitializer)              \
  _(RegisterizerLoadThenStore)              \
  _(RegisterizerParallelized)               \
  _(RegisterizerConditions)                 \
  _(StmtClone)                              \
  _(BoundsInference_1)                      \
  _(BoundsInference_2)                      \
  _(BoundsInference_3)                      \
  _(BoundsInference_4)                      \
  _(BoundsInference_5)                      \
  _(BoundsInference_6)                      \
  _(BoundsInferenceNonOverlapping)          \
  _(BoundsInferenceAdjacent)                \
  _(MergeInferredBounds)                    \
  _(MergeInferredLoadStoreDiff)             \
  _(MergeInferred2DBounds)                  \
  _(MergeAdjacentBounds)                    \
  _(MergeSymbolicBounds)                    \
  _(MergeSymbolicAdjacent)                  \
  _(LoopNestComputeAt_1)                    \
  _(LoopNestComputeAt_2)                    \
  _(LoopNestComputeAt_3)                    \
  _(LoopNestComputeAt_4)                    \
  _(LoopNestReorderAxis1)                   \
  _(LoopNestReorderPartialAxes)             \
  _(LoopNestReorderInternalAxis)            \
  _(LoopNestReorderEnclosingAxis)           \
  _(LoopNestReorderSameAxis)                \
  _(LoopNestReorderExtraStatements)         \
  _(LoopNestReorderLongStringOfPreOrphans)  \
  _(LoopNestReorderLongStringOfPostOrphans) \
  _(LoopNestReorderLongStringFull)          \
  _(LoopNestReorderInternalLoopNest)        \
  _(OuterLoopVectorization)                 \
  _(Unroll)                                 \
  _(UnrollOuter)                            \
  _(UnrollInner)                            \
  _(UnrollMultipleStatements)               \
  _(UnrollEmpty)                            \
  _(NoUnroll)                               \
  _(UnrollWithLet)                          \
  _(NormalizeStartPositive)                 \
  _(NormalizeStartNegative)                 \
  _(NormalizeStartZero)                     \
  _(NormalizeStartVariable)                 \
  _(NormalizeOnNestedOuterLoop)             \
  _(NormalizeOnNestedInnerLoop)             \
  _(NormalizeAndSplitWithTail)              \
  _(DetectInlineRankMismatch)               \
  _(Kernel_1)                               \
  _(Kernel_2)                               \
  _(Kernel_3)                               \
  _(Kernel_4)                               \
  _(KernelSumAllAxes)                       \
  _(KernelSumOneAxis)                       \
  _(KernelSumMultipleAxes)                  \
  _(FuserPass_1)                            \
  _(FuserPass_2)                            \
  _(FuserPass_3)                            \
  _(FuserPass_0DimInput)                    \
  _(FuserPass_UnfusibleDevice)              \
  _(FuserPass_UnknownShapes)                \
  _(FuserPass_Multidevice)                  \
  _(FuserPass_MergeGroups)                  \
  _(TrainBasic)

#define TH_FORALL_TENSOREXPR_TESTS_LLVM(_) \
  _(LLVMByteImmTest)                       \
  _(LLVMCharImmTest)                       \
  _(LLVMShortImmTest)                      \
  _(LLVMIntImmTest)                        \
  _(LLVMLongImmTest)                       \
  _(LLVMFloatImmTest)                      \
  _(LLVMDoubleImmTest)                     \
  _(LLVMHalfImmTest)                       \
  _(LLVMByteAddTest)                       \
  _(LLVMCharAddTest)                       \
  _(LLVMShortAddTest)                      \
  _(LLVMIntAddTest)                        \
  _(LLVMLongAddTest)                       \
  _(LLVMFloatAddTest)                      \
  _(LLVMDoubleAddTest)                     \
  _(LLVMHalfAddTest)                       \
  _(LLVMByteSubTest)                       \
  _(LLVMCharSubTest)                       \
  _(LLVMShortSubTest)                      \
  _(LLVMIntSubTest)                        \
  _(LLVMLongSubTest)                       \
  _(LLVMFloatSubTest)                      \
  _(LLVMDoubleSubTest)                     \
  _(LLVMHalfSubTest)                       \
  _(LLVMByteMulTest)                       \
  _(LLVMCharMulTest)                       \
  _(LLVMShortMulTest)                      \
  _(LLVMIntMulTest)                        \
  _(LLVMLongMulTest)                       \
  _(LLVMFloatMulTest)                      \
  _(LLVMDoubleMulTest)                     \
  _(LLVMHalfMulTest)                       \
  _(LLVMByteDivTest)                       \
  _(LLVMCharDivTest)                       \
  _(LLVMShortDivTest)                      \
  _(LLVMIntDivTest)                        \
  _(LLVMLongDivTest)                       \
  _(LLVMFloatDivTest)                      \
  _(LLVMDoubleDivTest)                     \
  _(LLVMHalfDivTest)                       \
  _(LLVMIntToFloatCastTest)                \
  _(LLVMFloatToIntCastTest)                \
  _(LLVMIntToLongCastTest)                 \
  _(LLVMByteToCharCastTest)                \
  _(LLVMHalfToLongCastTest)                \
  _(LLVMByteToDoubleCastTest)              \
  _(LLVMLetTest01)                         \
  _(LLVMLetTest02)                         \
  _(LLVMLetTestMultitype)                  \
  _(LLVMBufferTest)                        \
  _(LLVMBlockTest)                         \
  _(LLVMLoadStoreTest)                     \
  _(LLVMVecLoadStoreTest)                  \
  _(LLVMVecFloat_acosLane4Test)            \
  _(LLVMVecFloat_asinLane4Test)            \
  _(LLVMVecFloat_atanLane4Test)            \
  _(LLVMVecFloat_coshLane4Test)            \
  _(LLVMVecFloat_sinhLane4Test)            \
  _(LLVMVecFloat_tanhLane4Test)            \
  _(LLVMVecFloat_erfLane4Test)             \
  _(LLVMVecFloat_erfcLane4Test)            \
  _(LLVMVecFloat_expm1Lane4Test)           \
  _(LLVMVecFloat_lgammaLane4Test)          \
  _(LLVMVecFloat_acosLane8Test)            \
  _(LLVMVecFloat_asinLane8Test)            \
  _(LLVMVecFloat_atanLane8Test)            \
  _(LLVMVecFloat_coshLane8Test)            \
  _(LLVMVecFloat_sinhLane8Test)            \
  _(LLVMVecFloat_tanhLane8Test)            \
  _(LLVMVecFloat_erfLane8Test)             \
  _(LLVMVecFloat_erfcLane8Test)            \
  _(LLVMVecFloat_expm1Lane8Test)           \
  _(LLVMVecFloat_lgammaLane8Test)          \
  _(LLVMVecDouble_acosLane2Test)           \
  _(LLVMVecDouble_asinLane2Test)           \
  _(LLVMVecDouble_atanLane2Test)           \
  _(LLVMVecDouble_coshLane2Test)           \
  _(LLVMVecDouble_sinhLane2Test)           \
  _(LLVMVecDouble_tanhLane2Test)           \
  _(LLVMVecDouble_erfLane2Test)            \
  _(LLVMVecDouble_erfcLane2Test)           \
  _(LLVMVecDouble_expm1Lane2Test)          \
  _(LLVMVecDouble_lgammaLane2Test)         \
  _(LLVMVecDouble_acosLane4Test)           \
  _(LLVMVecDouble_asinLane4Test)           \
  _(LLVMVecDouble_atanLane4Test)           \
  _(LLVMVecDouble_coshLane4Test)           \
  _(LLVMVecDouble_sinhLane4Test)           \
  _(LLVMVecDouble_tanhLane4Test)           \
  _(LLVMVecDouble_erfLane4Test)            \
  _(LLVMVecDouble_erfcLane4Test)           \
  _(LLVMVecDouble_expm1Lane4Test)          \
  _(LLVMVecDouble_lgammaLane4Test)         \
  _(LLVMMemcpyTest)                        \
  _(LLVMBzeroTest)                         \
  _(LLVMElemwiseAdd)                       \
  _(LLVMElemwiseAddFloat)                  \
  _(LLVMElemwiseLog10Float)                \
  _(LLVMElemwiseLog1pFloat)                \
  _(LLVMElemwiseMaxInt)                    \
  _(LLVMElemwiseMinInt)                    \
  _(LLVMElemwiseMaxFloat)                  \
  _(LLVMElemwiseMaxNaNFloat)               \
  _(LLVMElemwiseMinFloat)                  \
  _(LLVMElemwiseMinNaNFloat)               \
  _(LLVMCompareSelectIntEQ)                \
  _(LLVMCompareSelectFloatEQ)              \
  _(LLVMStoreFloat)                        \
  _(LLVMSimpleMath01)                      \
  _(LLVMComputeMul)                        \
  _(LLVMBroadcastAdd)                      \
  _(LLVMBitwiseOps)                        \
  _(LLVMDynamicShapeAdd)                   \
  _(LLVMBindDynamicShapeAdd)               \
  _(LLVMTensorDynamicShapeAdd)             \
  _(LLVMDynamicShape2D)                    \
  _(LLVMEmptyStmt)                         \
  _(LLVMEliminatedStmt)                    \
  _(LLVMIfThenElseTest)                    \
  _(LLVMVectorizerLoadStoreTest)           \
  _(LLVMSimpleReduction)                   \
  _(LLVMRFactorReduction)

// _(LLVMRFactorVectorizedReduction)

#define TH_FORALL_TENSOREXPR_TESTS_CUDA(_) \
  _(CudaTestVectorAdd01)                   \
  _(CudaTestVectorAdd02)                   \
  _(CudaDynamicShape2D)                    \
  _(CudaDynamicShapeSplit)                 \
  _(CudaOneBlockOneThreadGlobalReduce1)    \
  _(CudaOneBlockMultiThreadGlobalReduce1)  \
  _(CudaNoThreadIdxWrite_1)                \
  _(CudaLocalMemReduce_1)                  \
  _(CudaTestRand01)                        \
  _(CudaSigmoid)                           \
  _(CudaHalfCast)                          \
  _(CudaHalfSupport)                       \
  _(CudaPrioritizeDependents)              \
  _(CudaMaskBlockDim)                      \
  _(CudaMaskThreadDim)                     \
  _(CudaMaskMultiBlockDim)                 \
  _(CudaMaskBlockAndThreadDim)             \
  _(CudaMaskMultiDim)                      \
  _(CudaMaskMultiDimSymbolic)              \
  _(CudaMaskCompoundInnerLoop)             \
  _(CudaMaskInnerLoopOneBlock)             \
  _(CudaMaskMultiDimMultiAxis)             \
  _(CudaMaskMultiDimMultiLevel)
// _(CudaSharedMemReduce_1)

#define DECLARE_TENSOREXPR_TEST(name) void test##name();
TH_FORALL_TENSOREXPR_TESTS(DECLARE_TENSOREXPR_TEST)
#ifdef TORCH_ENABLE_LLVM
TH_FORALL_TENSOREXPR_TESTS_LLVM(DECLARE_TENSOREXPR_TEST)
#endif
#ifdef USE_CUDA
TH_FORALL_TENSOREXPR_TESTS_CUDA(DECLARE_TENSOREXPR_TEST)
#endif
#undef DECLARE_TENSOREXPR_TEST

} // namespace jit
} // namespace torch
